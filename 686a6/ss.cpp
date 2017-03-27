// File:    ss.cpp
// Author:  Casey Bladow
// Date:    3-4-14
// Class:   CSIS 252
// Program: payroll

// This file contains the ss function

#include "decl.h"

// function: ss
// description: This function will calculate the amount withheld
//		for each employee and store them in the
//              array of structs.
// function input:  employeesummary - struct containing total ss
//					withheld
//                  employees - employee data (array of structs)
//                  count - number of employees (int)
// function output: employees - ss amount withheld calculated for each 
//				 employee
// preconditions:   employees and count are correct
// postconditions:  employees array is updated to include ss withheld amount
void ss(summaryType employeesummary,employeeType employees[],int count)
{
   for (int i=0; i<count; i++)
   {
       double ss = employees[i].gross * .08;
       employees[i].ss = ss;
   }
}