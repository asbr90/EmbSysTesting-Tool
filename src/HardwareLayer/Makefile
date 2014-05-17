CC=g++
CFLAGS=-c -Wall
LDFLAGS=-I/usr/local/include -L/usr/local/lib -lwiringPi
SOURCES=main.cpp Driver_I2C.cpp 
DISTDIR=../../bin/
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=start

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(DISTDIR)$@

.cpp.o:   
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *o $(EXECUTABLE)
