// File:    fedTotal.cpp
// Author:  Casey Bladow
// Date:    3-4-14
// Class:   CSIS 252
// Program: payroll

#include "decl.h"

// function: fedTotal
// description: This function will calculate the total federal withheld
//              for all employees and return it
// function input:  employees - employee data (array of structs)
//                  count - number of employees (int)
// function output: sum - the total amount withheld
// preconditions:   employees and count are correct
//                  there is at least 1 employee
// postconditions:  the total amount withheld is returned
float fedTotal(const employeeType employees[],int count)
{
   int sum=0;  // sum of all test scores
   for (int i=0; i<count; i++)
      sum += employees[i].fed;
   return static_cast<float>(sum);
}