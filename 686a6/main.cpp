// File: main.cpp
// Author: Casey Bladow
// Date: 3-4-14
// Class: CSIS 252
// Program: payroll

// Description
// This program will read input from data file 'data' that
// contains employee information (Name, Hours worked, and
// their pay wage). The program will create or overwrite the
// file 'payroll' to contain the results.

#include "constants.h"
#include "decl.h"
#include "prototypes.h"
#include <iostream>
using namespace std;

int main()
{
   // variable declarations
   employeeType employees[maxemployees]; // employee data
   summaryType employeesummary;           // overall employee summary data 
   int count;                         // number of employees

   read(employeesummary,employees,count);
   gross(employeesummary,employees,count);
   fed(employeesummary,employees,count);
   ss(employeesummary,employees,count);
   net(employeesummary,employees,count);
   summary(employees,count,employeesummary);
   output(employees,employeesummary,count);
   cout << "\ninput read from file \"data\"\n";
   cout << "output written to file \"payroll\"\n\n";
   return 0;
}
