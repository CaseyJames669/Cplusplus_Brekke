CC = g++
EXE = prog
OBJECTS = main.o read.o write.o calculate.o
CFLAGS = -Wall
LFLAGS =

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp constants.h
		$(CC) $(CFLAGS) -c main.cpp

write.o:	write.cpp
		$(CC) $(CFLAGS) -c write.cpp

calculate.o:	calculate.cpp
		$(CC) $(CFLAGS) -c calculate.cpp

read.o:		read.cpp constants.h
		$(CC) $(CFLAGS) -c read.cpp

clean:
		rm -rf core.* $(EXE) $(OBJECTS) results
