// File:    findavg.cpp
// Author:  Dan Brekke
// Program: class example
// Date:    

// Description: This file contains the functions findsum and findavg

// Function: findsum
// Description: find the sum of the array
// Input:  numbers (array of int)
//         count (int) - the number of values in the array
// Output: sum (int) - the sum of the values in the array
// Preconditions:  <none>
// Postconditions: the sum of the values in the array is returned
int findsum(const int numbers[],int count)
{
   int sum=0;
   for (int i=0; i<count; i++)
      sum += numbers[i];
   return sum;
}

// Function: findavg
// Description: find the average value of the array
// Input:  numbers (array of int)
//         count (int) - the number of values in the array
// Output: sum (int) - the sum of the values in the array
// Preconditions:  there must be at least 1 value in the array
// Postconditions: the average of the values in the array is returned
double findavg(const int numbers[],int count)
{
   return static_cast<double>(findsum(numbers,count))/count;
}

