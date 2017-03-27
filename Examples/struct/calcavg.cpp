// File:    calcavg.cpp
// Author:  Dan Brekke
// Date:    
// Class:   CSIS 252
// Program: class example

#include "decl.h"

// function: calcavg
// description: This function will calculate the average test score
//              for all students and return it
// function input:  students - student data (array of structs)
//                  count - number of students (int)
// function output: average - the average test score
// preconditions:   students and count are correct
//                  there is at least 1 student
// postconditions:  the average score is returned
double calcavg(const studentType students[],int count)
{
   int sum=0;  // sum of all test scores
   for (int i=0; i<count; i++)
      sum += students[i].score;
   return static_cast<double>(sum)/count;
}

