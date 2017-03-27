// File: search.cpp
// Author: Casey Bladow
// Program: Asmt5
// Date: 2-24-14

//Description: This file contains the function search

#include <iostream>
#include <fstream>
using namespace std;

// Function: search
// Description: Input from the command line an integer and search the array for it
//		outputting the first and last index value and the number of times
//		that value appears
// Input: numbers (array of int)
//	  count (int) - the number of values in the array
//	  out (ofstream) - opened output file stream
//	  searchvalue (int) - the value to be searched for
//	  smallestindex (int) - the smallest index for the searchvalue
//	  largestindex (int) - the largest index for the searchvalue
//	  matches (int) - the number of times the searchvalue appears in array
// Output: out (ofstream) - the open output file stream
//	   
// Preconditions: the array must have at least 1 value 
//		  the ouput file stream must already be opened
// Postcondtions: the output file stream has been changed to include
//		  the value searched for, where it is located (highest
//		  index and lowest index), and the number of times if appears
//

void search(ofstream& out, const int numbers[], int count, int searchvalue, int& smallestindex, int& largestindex, int& matches)
{
  ofstream ofs;
  int searchInt = 0;
  int i;
  
  cout << "Enter an integer to search for in the array: ";
  cin >> searchInt;
 
  int flag = 0;
  int flag2 = 0;
  
  //iterates through numbers and checks to see if value is in
  //array.
  for (i = 0; i < count; i++)
    if (numbers[i] == searchInt)
    {
      flag = 1;
      break;
    }
    
  if (flag)
  {
    out << "The smallest index for the integer you searched for is in numbers[" << i << "]." << endl;
    
    
    //find the last index value for searched int.
    for (i = 9; i >= 0; i--)
      if (numbers[i] == searchInt)
      {
	flag2 = 1;
	break;
      }
    if (flag2)
    {
    out << "The largest index for the integer you searched for is in numbers[" << i << "]." << endl;
    }
    
    //itterates through and counts how many times the search value appears
    for (i = 0; i < count; i++)
    if (numbers[i] == searchInt)
    {
      matches++;
    }
    
    out << "The integer " << searchInt << " appears " << matches << " times." << endl;
  }
  else
  {
    out << "The integer you searched for is not in the array." << endl;
  }
}