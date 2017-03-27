// File:    biggest.cpp
// Author:  Dan Brekke
// Program: class example
// Date:    

// Description: This file contains the function biggest

// Function: biggest
// Description: find the biggest value in an array and return it
// Input:  numbers (array of int)
//         count (int) - the number of values in the array
// Output: big (int) - the biggest value in the array
// Preconditions:  the array must have at least 1 value
// Postconditions: the biggest value in the array is returned
int biggest(const int numbers[],int count)
{
   int big; 
   big = numbers[0]; // precondition, array has at least 1 value
   for (int i=1; i<count; i++)
      if (numbers[i] > big)
         big = numbers[i];
   return big;
}
