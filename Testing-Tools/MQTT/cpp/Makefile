CFLAGS=-Wall -ggdb -I../../../lib/mosquitto-1.1.2/lib/ -I../../../lib/mosquitto-1.1.2/lib/cpp
LDFLAGS=-L../../../lib/mosquitto-1.1.2/lib/ ../../../lib/mosquitto-1.1.2/lib/cpp/libmosquittopp.so.1 ../../../lib/mosquitto-1.1.2/lib/libmosquitto.so.1

.PHONY: all clean

all : mqtt3-client

mqtt3-client : mqtt3-client.o
	${CXX} $^ -o $@ ${LDFLAGS}

mqtt3-client.o : mqtt3-client.cpp
	${CXX} -c $^ -o $@ ${CFLAGS}

clean : 
	-rm -f *.o mqtt3-client
