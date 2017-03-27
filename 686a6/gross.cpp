// File:    gross.cpp
// Author:  Casey Bladow
// Date:    3-4-14
// Class:   CSIS 252
// Program: payroll

// This file contains the gross function

#include "decl.h"

// function: gross
// description: This function will calculate the amount gross
//		for each employee and store them in the
//              array of structs.
// function input:  employeesummary - struct containing total gross
//                  employees - employee data (array of structs)
//                  count - number of employees (int)
// function output: employees - gross amount calculated for each 
//				 employee
// preconditions:   employees and count are correct
// postconditions:  employees array is updated to include gross amount
void gross(summaryType employeesummary,employeeType employees[],int count)
{
   for (int i=0; i<count; i++)
   {
     if (employees[i].hours > 40)
     {
       double overtimePay = (employees[i].hours - 40)*((employees[i].wage)*1.5);
       double gross=((employees[i].wage)*40) + overtimePay;
       employees[i].gross = gross;
     }
     else
     {
      double gross=static_cast<double>(employees[i].wage)*employees[i].hours;
      employees[i].gross = gross;
      //students[i].grade = calcgrade(percent);
     }
   }
}