// File: greaterThanAvg.cpp
// Author: Casey Bladow
// Program: Asmt5
// Date: 2-24-14

//Description: This file contains the function greaterThanAvg

// Function: greaterThanAvg
// Description: count the number of integers that are greater than the average
// 		and return it
// Input: numbers (array of int)
//	  count (int) - the number of values in the array
// Output: greaterThanAverage (int) - the number of integers that are greater
//		than the average in the array
// Preconditions: the array must have at least 1 value
// Postcondtions: the number of integers that are greater than the average
//		  is returned

double findaverage(const int numbers[], int count);

int greaterThanAvg(const int numbers[], int count, double average)
{
  int i;
  int greaterThanAverage = 0;
  int temp = 0;
  average = findaverage(numbers, count);
  
  //cout << fixed << setprecision(0);
  for (i = 0; i < count; i++)
    if (numbers[i] > average && numbers[i] != average)
      greaterThanAverage++;
    else
      temp++;
    return greaterThanAverage;
}