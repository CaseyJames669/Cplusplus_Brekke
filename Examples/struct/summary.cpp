// File:    summary.cpp
// Author:  Dan Brekke
// Date:    
// Class:   CSIS 252
// Program: class example

#include "decl.h"
double calcavg(const studentType[],int count);
double calcmedian(const studentType[],int count);

// function: summary
// description: This function will calculate the test summary data
//              and store them in a struct.  The summary data includes
//              the high, low, average, and median test scores
// function input:  students - student data (array of structs)
//                  count - number of students (int)
// function output: summary - summary data for the test (struct)
// preconditions:   students and count are correct
//                  there is at least 1 student
//                  students array is sorted by score
// postconditions:  summary data is calculated and returned
//                  including high, low, avg, and median test scores
void summary(const studentType students[],int count,summaryType& summary)
{
   summary.high = students[0].score;
   summary.low = students[count-1].score;
   summary.avg = calcavg(students,count);
   summary.median = calcmedian(students,count);
}  
