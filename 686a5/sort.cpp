// File: sort.cpp
// Author: Casey Bladow
// Program: Asmt5
// Date: 2-24-14

//Description: This file contains the function sort

// Function: sort
// Description: sort the array from smallest to largest
// Input: numbers (array of int)
//	  n (int) - the number of values in the array
// Output: numbers (array of int) - sorted from smallest to largest
//	   
// Preconditions: the array must have at least 1 value
// Postcondtions: the array 'numbers' is sorted from smallest to largest
//

void sort(int numbers[], int n)
{
   int temp;
   int small;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      small=i;
      for (int j=i+1; j<n; j++)  // loop to find the smallest
         if (numbers[j] < numbers[small])
            small=j;
      temp = numbers[i];
      numbers[i] = numbers[small];
      numbers[small] = temp;
   }
}