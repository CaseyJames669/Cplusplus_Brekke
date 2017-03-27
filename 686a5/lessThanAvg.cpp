// File: lessThanAvg.cpp
// Author: Casey Bladow
// Program: Asmt5
// Date: 2-24-14

//Description: This file contains the function lessThanAvg

// Function: lessThanAvg
// Description: count the number of integers that are less than the average
// 		and return it
// Input: numbers (array of int)
//	  count (int) - the number of values in the array
// Output: lessThanAverage (int) - the number of integers that are less
//		than the average in the array
// Preconditions: the array must have at least 1 value
// Postcondtions: the number of integers that are less than the average
//		  is returned

double findaverage(const int numbers[], int count);

int lessThanAvg(const int numbers[], int count, double average)
{
  int i;
  int temp = 0;
  int lessThanAverage = 0;
  average = findaverage(numbers, count);
  
  //cout << fixed << setprecision(0);
  for (i = 0; i < count; i++)
    if (numbers[i] < average)
      lessThanAverage++;
    else
      temp++;
    return lessThanAverage;
}