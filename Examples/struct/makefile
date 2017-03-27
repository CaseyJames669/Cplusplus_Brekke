# File:    makefile
# Author:  Dan Brekke
# Date:    
# Class:   CSIS 252
# Program: class example

CC = g++

# NOTE: a backslash at the end of the line continues the line
OBJECTS = main.o read.o output.o calculate.o sort.o summary.o \
          calcavg.o calcmedian.o

EXE = prog

CFLAGS = 

LFLAGS = 

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp constants.h decl.h prototypes.h
		$(CC) $(CFLAGS) -c main.cpp

read.o:		read.cpp constants.h decl.h
		$(CC) $(CFLAGS) -c read.cpp

sort.o:		sort.cpp decl.h
		$(CC) $(CFLAGS) -c sort.cpp

calculate.o:	calculate.cpp decl.h
		$(CC) $(CFLAGS) -c calculate.cpp

summary.o:	summary.cpp decl.h
		$(CC) $(CFLAGS) -c summary.cpp

calcavg.o:	calcavg.cpp decl.h
		$(CC) $(CFLAGS) -c calcavg.cpp

calcmedian.o:	calcmedian.cpp decl.h
		$(CC) $(CFLAGS) -c calcmedian.cpp

output.o:	output.cpp decl.h
		$(CC) $(CFLAGS) -c output.cpp

clean:
		rm -rf $(OBJECTS) $(EXE) results
