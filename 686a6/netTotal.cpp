// File:    netTotal.cpp
// Author:  Casey Bladow
// Date:    3-4-14
// Class:   CSIS 252
// Program: payroll

#include "decl.h"

// function: netTotal
// description: This function will calculate the total net
//              for all employees and return it
// function input:  employees - employee data (array of structs)
//                  count - number of employees (int)
// function output: sum - the total net
// preconditions:   employees and count are correct
//                  there is at least 1 employee
// postconditions:  the total net is returned
float netTotal(const employeeType employees[],int count)
{
   int sum=0;  // sum of all test scores
   for (int i=0; i<count; i++)
      sum += employees[i].net;
   return static_cast<float>(sum);
}