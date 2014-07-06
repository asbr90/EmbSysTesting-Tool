CFLAGS=-Wall 
LDFLAGS= libmosquittopp.so.1 libmosquitto.so.1

.PHONY: all clean

all : test

test : test.o
	${CXX} $^ -o $@ ${LDFLAGS}

test.o : test.c
	${CXX} -c $^ -o $@ ${CFLAGS}


clean : 
	-rm -f *.o test
