// File:    net.cpp
// Author:  Casey Bladow
// Date:    3-4-14
// Class:   CSIS 252
// Program: payroll

// This file contains the net function

#include "decl.h"

// function: net
// description: This function will calculate the amount withheld
//		for each employee and store them in the
//              array of structs.
// function input:  employeesummary - struct containing total net
//					withheld
//                  employees - employee data (array of structs)
//                  count - number of employees (int)
// function output: employees - net amount withheld calculated for each 
//				 employee
// preconditions:   employees and count are correct
// postconditions:  employees array is updated to include net withheld amount
void net(summaryType employeesummary,employeeType employees[],int count)
{
   for (int i=0; i<count; i++)
   {
       double net = employees[i].gross - employees[i].fed - employees[i].ss;
       employees[i].net = net;
   }
}