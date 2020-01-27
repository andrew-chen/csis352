CC=g++
CFLAGS=-fno-diagnostics-color
OBJECTS=circle.o shape.o main.o rectangle.o square.o

prog:		$(OBJECTS)
		$(CC) $(CFLAGS) -o prog $(OBJECTS)

main.o:		main.cpp circle.o shape.o rectangle.o square.o
		$(CC) $(CFLAGS) -c main.cpp

circle.o:	circle.cpp circle.h shape.h shape.cpp
		$(CC) $(CFLAGS) -c circle.cpp

rectangle.o:	rectangle.cpp rectangle.h shape.h shape.cpp
		$(CC) $(CFLAGS) -c rectangle.cpp

square.o:	square.h square.cpp rectangle.cpp rectangle.h
		$(CC) $(CFLAGS) -c square.cpp

shape.o:	shape.cpp shape.h
		$(CC) $(CFLAGS) -c shape.cpp

clean:
		rm -rf prog $(OBJECTS) *~
