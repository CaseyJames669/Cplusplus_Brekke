// File:    summary.cpp
// Author:  Casey BladowDan Brekke
// Date:    3-4-14
// Class:   CSIS 252
// Program: payroll

#include "decl.h"
double grossTotal(const employeeType[],int count);
double fedTotal(const employeeType[],int count);
double ssTotal(const employeeType[],int count);
double netTotal(const employeeType[],int count);

// function: summary
// description: This function will calculate the employee summary data
//              and store them in a struct.  The summary data includes
//              the total gross, total net, total ss, total federal
// function input:  employees - employee data (array of structs)
//                  count - number of employees (int)
// function output: summary - summary data for employees (struct)
// preconditions:   employees and count are correct
//                  there is at least 1 employee
// postconditions:  summary data is calculated and returned
//                  including total gross, total fed, total ss, total net
void summary(const employeeType employees[],int count,summaryType& summary)
{
   summary.totalGross = grossTotal(employees,count);
   summary.federalWithholding = fedTotal(employees,count);
   summary.ssWithholding = ssTotal(employees,count);
   summary.netPay = netTotal(employees,count);
}  
