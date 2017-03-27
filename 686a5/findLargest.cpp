// File: findLargest.cpp
// Author: Casey Bladow
// Program: Asmt5
// Date: 2-24-14

//Description: This file contains the function findLargest

#include <fstream>
using namespace std;

// Function: findLargest
// Description: find the largest value in an array, its index value
//		 and outputs them
// Input: numbers (array of int)
//	  count (int) - the number of values in the array
//	  out (ofstream) - opened output file stream
//	  biggest (int) - the current largest value in the array
//	  index (int) - the index value of the largest int in the array
// Output: out (ofstream) - the opened output file stream
// Preconditions: the array must have at least 1 value 
//		  the ouput file stream must already be opened
// Postcondtions: the output file stream has been changed to include
//		  the arrays largest value and its index position

void findLargest(ofstream& out, const int numbers[], int count, int& biggest, int& index)
{
  int i;
  biggest = numbers[0];
  
  for (i = 0; i < count; i++)
    if (numbers[i] > biggest)
    {
      biggest = numbers[i];
      index = i;
    }
    out << "Largest integer was " << biggest << ". Indexed in numbers[" << index << "]." << endl;
}