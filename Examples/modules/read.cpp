// File:    read.cpp
// Author:  Dan Brekke
// Program: class example
// Date:    

// File Description: This file contains the function read

#include <iostream>
#include <fstream>
#include "constants.h"
using namespace std;

// Function: read
// Description: reads ints from the file 'data' until eof and stores them
//              then in an array
// Input:  <none>
// Output: numbers (array of int)
//         count (int) - the number of values read and stored into the array
// Preconditions:  <none>
// Postconditions: The array will be populated with the values in file 'data'
//                 the count will contain the number of value in the array
//                 note: if the file doesn't exist, count will be 0
void read(int numbers[], int& count)
{
   ifstream infile;
   int num;
   count=0;
   infile.open("data");
   if (infile.fail())
      cerr << "error opening input file 'data'\n";
   else
   {
      infile >> num;
      while (!infile.eof() && count < arraysize)
      {
         numbers[count++] = num;
         infile >> num;
      }
      if (!infile.eof())
         cerr << "WARNING: the array size was exceeded and input was stopped\n";
      infile.close();
      cout << "input read from the file 'data'\n";
   }
}

