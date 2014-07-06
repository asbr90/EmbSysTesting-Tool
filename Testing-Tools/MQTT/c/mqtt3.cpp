int main(int argc, char* argv[])
{
    sample_mem_persistence persist;
    mqtt::client client(ADDRESS, CLIENTID, &persist);

    callback cb;
    client.set_callback(cb);

    mqtt::connect_options connOpts;
    connOpts.set_keep_alive_interval(20);
    connOpts.set_clean_session(true);

    try {
        std::cout << "Connecting..." << std::flush;
        client.connect(connOpts);
        std::cout << "OK" << std::endl;

        // First use a message pointer.

        std::cout << "Sending message..." << std::flush;
        mqtt::message_ptr pubmsg = std::make_shared(PAYLOAD1);
        pubmsg->set_qos(QOS);
        client.publish(TOPIC, pubmsg);
        std::cout << "OK" << std::endl;

        // Now try with itemized publish.

        std::cout << "Sending next message..." << std::flush;
        client.publish(TOPIC, PAYLOAD2, strlen(PAYLOAD2)+1, 0, false);
        std::cout << "OK" << std::endl;

        // Now try with a listener, but no token

        std::cout << "Sending final message..." << std::flush;
        pubmsg = std::make_shared(PAYLOAD3);
        pubmsg->set_qos(QOS);
        client.publish(TOPIC, pubmsg);
        std::cout << "OK" << std::endl;

        // Disconnect
        std::cout << "Disconnecting..." << std::flush;
        client.disconnect();
        std::cout << "OK" << std::endl;
    }
    catch (const mqtt::persistence_exception& exc) {
        std::cerr << "Persistence Error: " << exc.what() << " ["
            << exc.get_reason_code() << "]" << std::endl;
        return 1;
    }
    catch (const mqtt::exception& exc) {
        std::cerr << "Error: " << exc.what() << " ["
            << exc.get_reason_code() << "]" << std::endl;
        return 1;
    }

    return 0;
}
