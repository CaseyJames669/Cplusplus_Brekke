// File: findSmallest.cpp
// Author: Casey Bladow
// Program: Asmt5
// Date: 2-24-14

//Description: This file contains the function findSmallest

#include <fstream>
using namespace std;

// Function: findSmallest
// Description: find the smallest value in an array, its index value
//		 and outputs them
// Input: numbers (array of int)
//	  count (int) - the number of values in the array
//	  out (ofstream) - opened output file stream
//	  smallest (int) - the current smallest value in the array
//	  index (int) - the index value of the smallest int in the array
// Output: out (ofstream) - the opened output file stream
// Preconditions: the array must have at least 1 value 
//		  the ouput file stream must already be opened
// Postcondtions: the output file stream has been changed to include
//		  the arrays smallest value and its index position

void findSmallest(ofstream& out, const int numbers[], int count, int& smallest, int& index)
{
  int i;
  smallest = numbers[0];
  
  for (i = 0; i < count; i++)
    if (numbers[i] < smallest)
    {
      smallest = numbers[i];
      index = i;
    }
  out << "Smallest integer was " << smallest << ". Indexed in numbers[" << index << "]." << endl;
}