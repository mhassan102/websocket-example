CXXFLAGS = -std=gnu++0x -Wall
LDLIBS = -lstdc++
.PHONY: all clean
all: client
clean:
	-rm  client  *.o
client: client.o easywsclient.o
client.o: client.cpp easywsclient.hpp
