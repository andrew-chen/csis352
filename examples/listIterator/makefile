# name
# class
# etc.

CC = g++
CFLAGS = -fno-diagnostics-color -Wall
LFLAGS = 

OBJECTS = main.o

prog:		$(OBJECTS)
		$(CC) -o prog $(OBJECTS) $(LFLAGS)

main.o:		main.cpp list.h 
		$(CC) $(CFLAGS) -c main.cpp

clean:		
		rm -rf prog *~ $(OBJECTS)
