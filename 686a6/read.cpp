// File:    read.cpp
// Author:  Casey Bladow
// Date:    3-4-14
// Class:   CSIS 252
// Program: payroll

#include "constants.h"
#include "decl.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

// function: read
// description: This function will read employee data from the file "data"
//              including the employee names, hours for
//              each employee, and wage, storing them in an array of structs
// function input:  none
// function output: employeesummary - only the employee name field (int)
//                  employees - employee data read and stored (array of structs)
//                  count - the number of employees
// preconditions:   the file "data" exists and is in proper format
// postconditions:  employee, employees, and count are updated and correct
void read(summaryType& employeesummary,employeeType employees[],int& count)
{
   ifstream f;        // the input file stream
   string name;       // temporary string for reading the name
   f.open("data");
   count = 0;
   getline(f,name);
   while (!f.eof() && count < maxemployees)
   {
      employees[count].name=name;
      f >> employees[count].hours;
      f.ignore(80,'\n');  // move input pointer to beginning of next line
      f >> employees[count].wage;
      f.ignore(80,'\n');  // move input pointer to beginning of next line
      count++;
      getline(f,name);
   }
   if (!f.eof())
      cout << "\nWARNING: input exceeded array size, extra ignored\n\n";
   f.close();
}
      
