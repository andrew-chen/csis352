OBJECTS=main.o circle.o coloredcircle.o colors.o
CC=g++
CFLAGS=-fno-diagnostics-color
LFLAGS=

prog:		$(OBJECTS)
		$(CC) -o prog $(OBJECTS) $(LFLAGS)

main.o:		main.cpp circle.o coloredcircle.o
		$(CC) $(CFLAGS) -c main.cpp

circle.o:	circle.cpp circle.h
		$(CC) $(CFLAGS) -c circle.cpp

colors.o:	colors.cpp colors.h
		$(CC) $(CFLAGS) -c colors.cpp

coloredcircle.o:	coloredcircle.cpp coloredcircle.h circle.o
		$(CC) $(CFLAGS) -c coloredcircle.cpp

clean:
		rm -rf $(OBJECTS) *~ prog
