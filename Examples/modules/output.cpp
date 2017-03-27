// File:    output.cpp
// Author:  Dan Brekke
// Program: class example
// Date:    

// Description: This file contains the function output

#include <fstream>
using namespace std;

// Function: output
// Description: outputs the array to the file passed in as a parameter
// Input:  numbers (array of int)
//         count (int) - the number of values in the array
//         out (ofstream) - opened output file stream
// Output: out (ofstream) - the opened output file stream
// Preconditions:  the output file stream must be already opened
// Postconditions: the output file stream has been changed to include
//                    the array contents
void output(ofstream& out, const int numbers[], int count)
{
   out << "numbers in the array: ";
   for (int i=0; i<count; i++)
      out << numbers[i] << ' ';
   out << endl;
}

