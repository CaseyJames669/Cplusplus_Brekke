// File: main.cpp
// Author: Casey Bladow
// Program: Asmt5
// Date: 2-24-14

// Description: This file contains the main finction
// The program will read ints from the file 'data' into an array,
// output them to a file 'results' along with the average value,
// number of ints that are less than that average, numbers of ints 
// that are above that average, the smallest integer and its index,
// the largest integer and its index value, the number of even integers,
// the number of odd integers, the array after its been sorted, the
// integer you searched for, its lowest and highest index value, and 
// how many times it appears in the array.

#include <iostream>
#include <iomanip>
#include <fstream>
#include "constants.h"
using namespace std;

// function prototypes
void read(int numbers[], int& count);
void output(ofstream&, const int numbers[], int count);
int findsum(const int numbers[], int count);
double findaverage(const int numbers[], int count);
int lessThanAvg(const int numbers[], int count, double average);
int greaterThanAvg(const int numbers[], int count, double average);
void findSmallest(ofstream&, const int numbers[], int count, int& smallest, int& index);
void findLargest(ofstream&, const int numbers[], int count, int& biggest, int& index);
int evens(const int numbers[], int count);
int odds(const int numbers[], int count);
void search(ofstream&, const int numbers[], int count, int searchvalue, int& smallestindex, int& largestindex, int& matches);
void sort(int numbers[], int n);

// Function: main
// Description: the main function of the program
// Input: <none>
// Output: <none>
// Preconditions: the input file 'data' must exist and contain all ints
// Postconditions: the output file 'results' is created

int main()
{
  ofstream ofs;
  int numbers[arraysize];
  int count;
  double average;
  int smallest;
  int biggest;
  int index;
  int searchvalue = 0;
  int smallestindex = 0;
  int largestindex = 0;
  int matches = 0;
  
  read(numbers, count);
  if (count > 0)
  {
    ofs.open("results");
    ofs << fixed << showpoint << setprecision(2);
    ofs << "Entered Array: ";
    output(ofs, numbers, count);
    ofs << "Average is: " << findaverage(numbers, count) << endl;
    ofs << "Number of ints that are less than average: " << lessThanAvg(numbers, count, average) << endl;
    ofs << "Number of ints that are greater than average: " << greaterThanAvg(numbers, count, average) << endl;
    findSmallest(ofs, numbers, count, smallest, index);
    findLargest(ofs, numbers, count, biggest, index);
    ofs << "Number of Even Integers: " << evens(numbers, count) << endl;
    ofs << "Number of Odd Integers: " << odds(numbers, count) << endl;
    ofs << "Sorted Array: "; 
    sort(numbers, count);
    output(ofs, numbers, count);
    search(ofs, numbers, count, searchvalue, smallestindex, largestindex, matches);
    ofs.close();
    cout << "Output written to the file 'results'\n";
  }
  else
    cout << "Output file 'results' not written\n";
return 0;
}
