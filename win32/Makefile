CC=g++
#CFLAGS=-c -Wall
#CFLAGS=-c -Wall -fPIC -g -std=c++0x
CFLAGS =  -Wall -g -w -fPIC -DWITH_NONAMESPACES -fno-use-cxa-atexit -fexceptions -DWITH_DOM  -DWITH_OPENSSL -DSOAP_DEBUG  

AR= ar
ARFLAGS=crv 

INCLUDE= -I../3rdparty/openssl-1.0.1g/include/openssl
		

LIBS=  -lssl -lcrypto

SOURCES:=$(wildcard *.c) $(wildcard *.cpp)
OBJECTS:=$(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCES)))
EXECUTABLE=libonvif.a

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
#	$(CC) $(LDFLAGS) $(LIBS) $(OBJECTS) -o $@
	$(AR) $(ARFLAGS)  $@ $(OBJECTS)
	
.cpp.o:
	$(CC) -c $(CFLAGS) $(INCLUDE)  $< -o $@
	
clean:
	rm $(EXECUTABLE) $(OBJECTS)
	


