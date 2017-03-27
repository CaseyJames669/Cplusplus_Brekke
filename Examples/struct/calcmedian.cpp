// File:    calcmedian.cpp
// Author:  Dan Brekke
// Date:    
// Class:   CSIS 252
// Program: class example

#include "decl.h"

// function: calcmedian
// description: This function will calculate the median test score.
//              If the number of students is odd, the median is the
//              middle score.  If even, the median is the average
//              of the middle 2 test scores.
// function input:  students - student data (array of structs)
//                  count - number of students (int)
// function output: median - the median test score
// preconditions:   students and count are correct
//                  there is at least 1 student
//                  students array is sorted by score
// postconditions:  the median score is returned
double calcmedian(const studentType students[],int count)
{
   if (count % 2 == 1) // odd number of students
      return students[count/2].score;
   else // even number of students
      return (students[(count-1)/2].score+students[count/2].score) 
             / static_cast<double>(2);
}
