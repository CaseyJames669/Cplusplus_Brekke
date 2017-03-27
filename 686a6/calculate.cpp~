// File:    calculate.cpp
// Author:  Dan Brekke
// Date:    
// Class:   CSIS 252
// Program: class example

// This file contains the calculate and the calgrade functions

#include "decl.h"

char calcgrade(double pct);  // prototype for below function

// function: calculate
// description: This function will will calculate the average and letter
//              grade for each student and store them in the
//              array of structs.
// function input:  testsummary - struct containing maximum test score
//                  students - student data (array of structs)
//                  count - number of students (int)
// function output: students - pct and grade calculated for each student
// preconditions:   students and count are correct
// postconditions:  students array is updated to include pct and grade
void calculate(summaryType testsummary,studentType students[],int count)
{
   for (int i=0; i<count; i++)
   {
      double percent=static_cast<double>(students[i].score)/testsummary.testmax;
      students[i].pct = percent*100;
      students[i].grade = calcgrade(percent);
   }
}

// function: calcgrade
// description: This function will calculate the letter grade from
//              the percentage according to 90% and above 'A'
//              80% and above 'B' etc.
// function input:  pct - percentage of a test score
// function output: letter grade
// preconditions:   pct is in the range of 0 to 1 (or greater than 1 for
//                  tests allowing bonus points).  
// postconditions:  test letter grade is returned
//                  If pct is greater than 1 (100%), the grade
//                  returned is 'A' and if pct is negative (which should
//                     not occur), the grade returned is 'F'
char calcgrade(double pct)
{
   if (pct >= .9)
      return 'A';
   else if (pct >= .8)
      return 'B';
   else if (pct >= .7)
      return 'C';
   else if (pct >= .6)
      return 'D';
   else
      return 'F';
}
   
