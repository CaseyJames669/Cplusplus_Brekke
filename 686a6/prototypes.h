// File:    prototypes.h
// Author:  Casey Bladow
// Date:    3-4-14
// Class:   CSIS 252
// Program: payroll

// Description
// This file contains the function prototypes and is included in main.cpp

// function prototypes
void read(summaryType& employeesummary,employeeType[],int& count);
void gross(summaryType employeesummary,employeeType[],int count);
void fed(summaryType employeesummary,employeeType[],int count);
void ss(summaryType employeesummary,employeeType[],int count);
void net(summaryType employeesummary,employeeType[],int count);
void summary(const employeeType[],int count,summaryType&);
void output(const employeeType[], summaryType, int count);
