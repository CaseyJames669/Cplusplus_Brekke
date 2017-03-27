# File:    makefile
# Author:  Casey Bladow
# Date:    3-4-14
# Class:   CSIS 252
# Program: payroll

CC = g++

# NOTE: a backslash at the end of the line continues the line
OBJECTS = main.o read.o output.o summary.o gross.o fed.o ss.o net.o \
	  grossTotal.o fedTotal.o ssTotal.o netTotal.o

EXE = prog

CFLAGS = 

LFLAGS = 

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp constants.h decl.h prototypes.h
		$(CC) $(CFLAGS) -c main.cpp

read.o:		read.cpp constants.h decl.h
		$(CC) $(CFLAGS) -c read.cpp

summary.o:	summary.cpp decl.h
		$(CC) $(CFLAGS) -c summary.cpp

output.o:	output.cpp decl.h
		$(CC) $(CFLAGS) -c output.cpp
		
gross.o:	gross.cpp decl.h
		$(CC) $(CFLAGS) -c gross.cpp
		
fed.o:		fed.cpp decl.h
		$(CC) $(CFLAGS) -c fed.cpp
		
ss.o:		ss.cpp decl.h
		$(CC) $(CFLAGS) -c ss.cpp
		
net.o:		net.cpp decl.h
		$(CC) $(CFLAGS) -c net.cpp
		
grossTotal.o:	grossTotal.cpp decl.h
		$(CC) $(CFLAGS) -c grossTotal.cpp
		
fedTotal.o:	fedTotal.cpp decl.h
		$(CC) $(CFLAGS) -c fedTotal.cpp
		
ssTotal.o:	ssTotal.cpp decl.h
		$(CC) $(CFLAGS) -c ssTotal.cpp
		
netTotal.o:	netTotal.cpp decl.h
		$(CC) $(CFLAGS) -c netTotal.cpp

clean:
		rm -rf $(OBJECTS) $(EXE) payroll
