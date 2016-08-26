CC=g++
CFLAGS = -c -Wall -g -w -fPIC -DWITH_NONAMESPACES -fno-use-cxa-atexit -fexceptions -DWITH_DOM  -DWITH_OPENSSL -DSOAP_DEBUG  

LDFLAGS=   -L/usr/lib -L/usr/local/lib -L../../../win32


INCLUDE=  -I/usr/include \
		 -I/usr/local/include \
		 -I../../../include \
		 -I../../../win32 \
    
LIBS= -Wl,--no-as-needed -ldl  -lssl -lcrypto -lonvif
SOURCES=$(wildcard *.cpp )
 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=testVideoOnvifFilter

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS)  $(LDFLAGS)  -Xlinker "-(" $(LIBS) -Xlinker "-)"    -o $@
	
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDE) $< -o $@
	
clean:
	rm $(EXECUTABLE) $(OBJECTS)
	
install:
	mkdir -p $(OUT_DIR)
	cp -f $(EXECUTABLE) $(OUT_DIR)
	


