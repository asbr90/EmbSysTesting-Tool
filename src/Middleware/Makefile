CFLAGS=-ggdb -I../../lib/mosquitto-1.1.2/lib -I../../lib/mosquitto-1.1.2/lib/cpp
LDFLAGS=-L../../lib/mosquitto-1.1.2/lib ../../lib/mosquitto-1.1.2/lib/cpp/libmosquittopp.so.1 ../../lib/mosquitto-1.1.2/lib/libmosquitto.so.1

.PHONY: all clean

all : MQTTv3

MQTTv3 : main.o MQTTv3.o Publisher.o Subscriber.o Message.o
	${CXX} $^ -o $@ ${LDFLAGS}

Message.o: Message.cpp
	${CXX} -c $^ -o $@ ${CFLAGS}


Subscriber.o: Subscriber.cpp
	${CXX} -c $^ -o $@ ${CFLAGS}

Publisher.o : Publisher.cpp
	${CXX} -c $^ -o $@ ${CFLAGS}

main.o : main.cpp
	${CXX} -c $^ -o $@ ${CFLAGS}

MQTTv3.o : MQTTv3.cpp
	${CXX} -c $^ -o $@ ${CFLAGS}

clean : 
	-rm -f *.o m MQTTv3
