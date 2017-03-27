// File:    decl.h
// Author:  Dan Brekke
// Date:    
// Class:   CSIS 252
// Program: class example

// Description
// This file contains the declarations for the structs
//    studentType - single student
//                  an array declared will store data for each student
//    summaryType - summary for all test score data

#include <string>
using namespace std;

struct studentType
{
   string name;    // student name
   int score;      // student test score
   double pct;     // percentage achieved on the test
   char grade;     // letter grade
};

struct summaryType
{
   int testmax;   // the maximum test score, read in from the data file
   int high;      // high score for all students
   int low;       // low score for all students
   double avg;    // average score for all students
   double median; // median score for all students
};

