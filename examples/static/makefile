CC = g++

OBJECTS = main.o someclass.o

LFLAGS = 

CFLAGS =  
 
EXE = prog

$(EXE):		$(OBJECTS) 
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS) 

main.o:		main.cpp someclass.o
		$(CC) $(CFLAGS) -c main.cpp 

someclass.o:	someclass.cpp
		$(CC) $(CFLAGS) -c someclass.cpp 
    
clean:
		rm -rf $(EXE) $(OBJECTS) 

