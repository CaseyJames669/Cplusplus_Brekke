// File:    main.cpp
// Author:  Dan Brekke
// Date:    
// Class:   CSIS 252
// Program: class example

// Description
// This program will read input from the data file "scores" that
// contains student test results for a single test.  The program will
// then create or overwrite the file "results" to contain the results
// for the test.

#include "constants.h"
#include "decl.h"
#include "prototypes.h"
#include <iostream>
using namespace std;

int main()
{
   // variable declarations
   studentType students[maxstudents]; // student data
   summaryType testsummary;           // overall test summary data 
   int count;                         // number of students

   read(testsummary,students,count);
   sort(students,count);
   calculate(testsummary,students,count);
   summary(students,count,testsummary);
   output(students,testsummary,count);
   cout << "\ninput read from file \"scores\"\n";
   cout << "output written to file \"results\"\n\n";
   return 0;
}

