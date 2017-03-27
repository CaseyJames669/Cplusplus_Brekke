prog:		biggest.o findavg.o main.o output.o read.o
# a backslash as the last char continues command on the next line
		g++ -o prog biggest.o findavg.o main.o output.o \
		read.o
main.o:		main.cpp constants.h
		g++ -c main.cpp
biggest.o:	biggest.cpp
		g++ -c biggest.cpp
findavg.o:	findavg.cpp
		g++ -c findavg.cpp
output.o:	output.cpp
		g++ -c output.cpp
read.o:		read.cpp constants.h
		g++ -c read.cpp
clean:
		rm -rf *.o *~ prog results
