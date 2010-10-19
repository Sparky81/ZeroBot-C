CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		zerobot.o

LIBS =

TARGET =	zerobot

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
