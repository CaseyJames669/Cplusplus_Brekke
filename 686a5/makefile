prog5:			evens.o findaverage.o findLargest.o findSmallest.o greaterThanAvg.o \
			lessThanAvg.o main.o odds.o output.o read.o sort.o search.o	
			g++ -o prog5 evens.o findaverage.o findLargest.o findSmallest.o \
			greaterThanAvg.o lessThanAvg.o main.o odds.o output.o read.o \
			sort.o search.o
evens.o:		evens.cpp
			g++ -c evens.cpp
findaverage.o:		findaverage.cpp
			g++ -c findaverage.cpp
findLargest.o:		findLargest.cpp
			g++ -c findLargest.cpp
findSmallest.o:		findSmallest.cpp
			g++ -c findSmallest.cpp
greaterThanAvg.o:	greaterThanAvg.cpp
			g++ -c greaterThanAvg.cpp
lessThanAvg.o:		lessThanAvg.cpp
			g++ -c lessThanAvg.cpp
main.o:			main.cpp constants.h
			g++ -c main.cpp
odds.o:			odds.cpp
			g++ -c odds.cpp
output.o:		output.cpp
			g++ -c output.cpp
read.o:			read.cpp constants.h
			g++ -c read.cpp
sort.o:			sort.cpp
			g++ -c sort.cpp
search.o:		search.cpp
			g++ -c search.cpp
clean:
			rm -f *.o *~ prog5 results