// File:    sort.cpp
// Author:  Dan Brekke
// Date:    
// Class:   CSIS 252
// Program: class example

#include "decl.h"
#include <string>
using namespace std;

// function: sort
// description: This function will sort the array of structs descendingly
//              according to the student test score
// function input:  students - student data (array of structs)
//                  count - number of students (int)
// function output: students - student data (array of structs)
// preconditions:   students and count are correct
// postconditions:  students are ordered descendingly according to test score
void sort(studentType students[], int n)
{
   studentType temp;    // for swapping structs
   for (int i=0; i<n-1; i++)  // put n-1 number in their correct spot
   {
      int big=i;        // index of largest test score found
      for (int j=i+1; j<n; j++)  // loop to find the biggest
         if (students[j].score > students[big].score)
            big=j;
      temp = students[i];           // swap biggest to array position i
      students[i] = students[big];
      students[big] = temp;
   }
}
