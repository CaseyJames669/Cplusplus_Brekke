// File:    output.cpp
// Author:  Dan Brekke
// Date:    
// Class:   CSIS 252
// Program: class example

#include "decl.h"
#include <fstream>
#include <iomanip>
using namespace std;

// function: output
// description: This function will output all the results from the
//              program to the file "results"
// function input:  students - student data (array of structs)
//                  summary - test summary data (summaryType struct)
//                  count - number of students (int)
// function output: none
// preconditions:   all input to the function has been calculated 
//                  and correct
// postconditions:  the file "results" was created and contains all
//                  the output from the program
void output(const studentType students[],summaryType summary,
            int count)
{
   ofstream f;         // the outputfile stream
   f.open("results");
   f << fixed << showpoint << setprecision(2); // format output
   f << "Name                 score    pct   grade\n";
   f << "------------------   -----  ------  -----\n";
   for (int i=0; i<count; i++)
   {
      f << setw(20) << left << students[i].name;
      f << setw(5) << right << students[i].score;
      f << setw(8) << students[i].pct << '%';
      f << setw(5) << students[i].grade << endl;
   }
   f << endl;
   f << "maximum score: " << summary.testmax << endl;
   f << "high score: " << summary.high << endl;
   f << "low score: " << summary.low << endl;
   f << "average score: " << summary.avg << endl;
   f << "median score: " << summary.median << endl;
   f.close();
}

