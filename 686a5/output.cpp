// File: output.cpp
// Author: Casey Bladow
// Program: Asmt5
// Date: 2-24-14

//Description: This file contains the function output

#include <fstream>
using namespace std;

// Function: output
// Description: outputs the array to the file passed in as a parameter
// Input: numbers (array of int)
//	  count (int) - the number of values in the array
//	  out (ofstream) - opened output file stream
// Output: out (ofstream) - the open output file stream
// Preconditions: the output file stream must be already opened
// Postcondtions: the output file stream has been changed to include
//			the array contents

void output(ofstream& out, const int numbers[], int count)
{
  int i;
  //out << "Numbers in array: ";
  for (i = 0; i < count; i++)
    out << numbers[i] << ' ';
  out << endl;
}