// File:    fed.cpp
// Author:  Casey Bladow
// Date:    3-4-14
// Class:   CSIS 252
// Program: payroll

// This file contains the fed function

#include "decl.h"

// function: fed
// description: This function will calculate the amount withheld
//		for each employee and store them in the
//              array of structs.
// function input:  employeesummary - struct containing total federal
//					withheld
//                  employees - employee data (array of structs)
//                  count - number of employees (int)
// function output: employees - federal amount withheld calculated for each 
//				 employee
// preconditions:   employees and count are correct
// postconditions:  employees array is updated to include fed withheld amount
void fed(summaryType employeesummary,employeeType employees[],int count)
{
   for (int i=0; i<count; i++)
   {
     if (employees[i].gross > 0 && employees[i].gross < 50)
     {
       double fed = 0;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 50 && employees[i].gross < 100)
     {
       double fed = employees[i].gross * .01;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 100 && employees[i].gross < 150)
     {
       double fed = employees[i].gross * .02;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 150 && employees[i].gross < 200)
     {
       double fed = employees[i].gross * .03;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 200 && employees[i].gross < 250)
     {
       double fed = employees[i].gross * .04;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 250 && employees[i].gross < 300)
     {
       double fed = employees[i].gross * .05;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 300 && employees[i].gross < 350)
     {
       double fed = employees[i].gross * .06;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 350 && employees[i].gross < 400)
     {
       double fed = employees[i].gross * .07;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 400 && employees[i].gross < 450)
     {
       double fed = employees[i].gross * .08;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 450 && employees[i].gross < 500)
     {
       double fed = employees[i].gross * .09;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 500 && employees[i].gross < 550)
     {
       double fed = employees[i].gross * .10;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 550 && employees[i].gross < 600)
     {
       double fed = employees[i].gross * .11;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 600 && employees[i].gross < 650)
     {
       double fed = employees[i].gross * .12;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 650 && employees[i].gross < 700)
     {
       double fed = employees[i].gross * .13;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 700 && employees[i].gross < 750)
     {
       double fed = employees[i].gross * .14;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 750 && employees[i].gross < 800)
     {
       double fed = employees[i].gross * .15;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 800 && employees[i].gross < 850)
     {
       double fed = employees[i].gross * .16;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 850 && employees[i].gross < 900)
     {
       double fed = employees[i].gross * .17;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 900 && employees[i].gross < 950)
     {
       double fed = employees[i].gross * .18;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 950 && employees[i].gross < 1000)
     {
       double fed = employees[i].gross * .19;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1000 && employees[i].gross < 1050)
     {
       double fed = employees[i].gross * .20;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1050 && employees[i].gross < 1100)
     {
       double fed = employees[i].gross * .21;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1100 && employees[i].gross < 1150)
     {
       double fed = employees[i].gross * .22;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1150 && employees[i].gross < 1200)
     {
       double fed = employees[i].gross * .23;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1200 && employees[i].gross < 1250)
     {
       double fed = employees[i].gross * .24;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1250 && employees[i].gross < 1300)
     {
       double fed = employees[i].gross * .25;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1300 && employees[i].gross < 1350)
     {
       double fed = employees[i].gross * .26;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1350 && employees[i].gross < 1400)
     {
       double fed = employees[i].gross * .27;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1400 && employees[i].gross < 1450)
     {
       double fed = employees[i].gross * .28;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1450 && employees[i].gross < 1500)
     {
       double fed = employees[i].gross * .29;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1500 && employees[i].gross < 1550)
     {
       double fed = employees[i].gross * .30;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1550 && employees[i].gross < 1600)
     {
       double fed = employees[i].gross * .31;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1600 && employees[i].gross < 1650)
     {
       double fed = employees[i].gross * .32;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1650 && employees[i].gross < 1700)
     {
       double fed = employees[i].gross * .33;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1700 && employees[i].gross < 1750)
     {
       double fed = employees[i].gross * .34;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1750 && employees[i].gross < 1800)
     {
       double fed = employees[i].gross * .35;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1800 && employees[i].gross < 1850)
     {
       double fed = employees[i].gross * .36;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1850 && employees[i].gross < 1900)
     {
       double fed = employees[i].gross * .37;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1900 && employees[i].gross < 1950)
     {
       double fed = employees[i].gross * .38;
       employees[i].fed = fed;
     }
     else if (employees[i].gross >= 1950 && employees[i].gross < 2000)
     {
       double fed = employees[i].gross * .39;
       employees[i].fed = fed;
     }
     else
     {
       double fed = employees[i].gross * .40;
       employees[i].fed = fed;
     }
   }
}