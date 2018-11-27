CV = g++

DEBUG = -g

TARGET = main

CFLAGS = -c -Wall $(DEBUG)

all: $(TARGET)

$(TARGET): main.o
	$(CV) main.o -o $(TARGET)

main.o: main.cpp
	$(CV) $(CFLAGS) main.cpp

clean:
	rm *.o *~ $(TARGET)
