// File:    read.cpp
// Author:  Dan Brekke
// Date:    
// Class:   CSIS 252
// Program: class example

#include "constants.h"
#include "decl.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

// function: read
// description: This function will student test data from the file "scores"
//              including the maximum test score, names and scores for
//              each student, storing them in an array of structs
// function input:  none
// function output: testsummary - only the maximum test score field (int)
//                  students - student data read and stored (array of structs)
//                  count - the number of students
// preconditions:   the file "scores" exists and is in proper format
// postconditions:  testmax, students, and count are updated and correct
void read(summaryType& testsummary,studentType students[],int& count)
{
   ifstream f;        // the input file stream
   string name;       // temporary string for reading the name
   f.open("scores");
   count = 0;
   f >> testsummary.testmax;
   f.ignore(80,'\n');  // move input pointer to beginning of next line
   getline(f,name);
   while (!f.eof() && count < maxstudents)
   {
      students[count].name=name;
      f >> students[count].score;
      f.ignore(80,'\n');  // move input pointer to beginning of next line
      count++;
      getline(f,name);
   }
   if (!f.eof())
      cout << "\nWARNING: input exceeded array size, extra ignored\n\n";
   f.close();
}
      
