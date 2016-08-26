CC=g++
CFLAGS= -c -Wall -fPIC -g
LDFLAGS= -ldl -L/usr/lib -L/usr/local/lib -L../../3rdparty/tinyxml2_5_3_linux/lib -L../../common/lib -L../BaseClass -L../BaseFilters  -L../BaseClas -L../FilterFactory/lib

AR= ar
ARFLAGS=crv

OUT_DIR=../../linux_bin/debug/plugin

SRC_DIR=../../common
3RDPARTY_DIR=../../3rdparty


INCLUDE= -I../FilterFactory \
         -I/usr/local/include \
         -I/usr/include \
         -I$(SRC_DIR)/GUID \
         -I$(SRC_DIR)/General \
         -I$(SRC_DIR)/StringUtils \
         -I$(SRC_DIR)/log \
         -I$(SRC_DIR)/URLParasser \
         -I$(SRC_DIR)/Exception \
         -I$(SRC_DIR)/BaseThread \
         -I$(SRC_DIR)/XMLParser \
         -I$(3RDPARTY_DIR)/boost_1_57_0 \
         -I$(3RDPARTY_DIR)/tinyxml2_5_3_linux/include \
		 -I$(3RDPARTY_DIR) \
         -I ../BaseFilters \
         -I../BaseClass \
		 -I../gsoap/gsoap/runtime \
		 -I../onvifgen \
		 -I../include \
		 -I../3rdparty/openssl-1.0.1g/include \
		
LIBS= -Wl,--no-as-needed -ldl -luuid -lssl -lagoclient  -lboost_system   -lboost_filesystem -lavfilter -lavdevice -lavformat -lavcodec -lavutil -lswresample -lswscale  -lz -lpthread -lrt  -lboost_regex -lcppunit   -llog4cplus -lBaseClass -luuid -lcommon -ltinyxml

#SOURCES=$(wildcard *.cpp )
SOURCES:=$(wildcard *.c) $(wildcard *.cpp)
#OBJECTS=$(SOURCES:.cpp=.o)
OBJECTS:=$(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCES)))
EXECUTABLE=libVideoOnvifFilters.so

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS)  $(LDFLAGS)  -Xlinker "-(" $(LIBS) -Xlinker "-)" -shared   -o $@

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDE) $< -o $@

clean:
	rm $(EXECUTABLE) $(OBJECTS)

install:
	mkdir -p $(OUT_DIR)
	cp -f $(EXECUTABLE) $(OUT_DIR)

