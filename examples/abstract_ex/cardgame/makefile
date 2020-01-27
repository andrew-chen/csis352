OBJECTS = main.o card.o vt100.o vtalt.o

CC=g++

prog:		$(OBJECTS)
		$(CC) -o prog $(OBJECTS)
main.o:		main.cpp display.h vt100.h vt100.cpp
		$(CC) -c main.cpp
card.o:		card.cpp display.h vt100.h vt100.cpp
		$(CC) -c card.cpp
vt100.o:	vt100.cpp vt100.h display.h
		$(CC) -c vt100.cpp
vtalt.o:	vtalt.cpp vtalt.h display.h
		$(CC) -c vtalt.cpp
clean:
		rm -rf $(OBJECTS) *~ prog
