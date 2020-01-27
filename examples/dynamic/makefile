# name
# class
# etc.

CC = g++
CFLAGS =  -fno-diagnostics-color -Wall
LFLAGS = 

OBJECTS = main.o intlist.o

prog:		$(OBJECTS)
		$(CC) -o prog $(OBJECTS) $(LFLAGS)

main.o:		main.cpp intlist.h 
		$(CC) $(CFLAGS) -c main.cpp

intlist.o: 	intlist.cpp intlist.h 
		$(CC) $(CFLAGS) -c intlist.cpp

clean:		
		rm -rf prog *~ $(OBJECTS)
