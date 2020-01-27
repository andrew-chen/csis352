OBJECTS=main.o 
CC=g++
CFLAGS=-fno-diagnostics-color
LFLAGS=
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp stackType.h
		$(CC) $(CFLAGS) -c main.cpp

clean:
		rm -rf $(OBJECTS) $(EXE) *~
