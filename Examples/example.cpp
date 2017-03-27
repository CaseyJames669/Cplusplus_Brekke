// File:      <name of the file>
// Name:      <your name>
// Class:     CSIS 252
// Program:   assignment #
// Date:      <date created>

#include <iostream>
#include <iomanip>

using namespace std;

// Program Description
// This program will input a positive integer from the keyboard and
// report each number that evenly divides into it.  The output will
// be written to the screen.

int main() 
{

// Variables

   int number,         // the number input from the keyboard
       count,          // the value to check if it divides evenly
       remainder;      // the remainder of dividing count into number

// Describe the process to the user

   cout << "\nThis program will input a positive integer ";
   cout << "and report all" << endl;
   cout << "numbers that divide evenly into it." << endl << endl;

// Prompt the user and read the input

   cout << "Enter a positive whole number: ";
   cin >> number;

// Calculate and report the numbers that divide evenly into the number.
// Start by reporting 1 as it always divides evenly.  Then check the
// numbers from 2 to 1/2 of number and report each that divide evenly.
// No value greater than 1/2 of number (except for the number itself)
// could divide evenly (yes, I know that no number greater than the
// square root of the number could divide evenly).  Then end by reporting 
// the number itself.  A number divides evenly if there is a remainder of 0.

   cout << "The following numbers evenly divide into " << number << endl;
   cout << setw(4) << 1;      // report 1 as it always divides evenly
   count = 2;
   while (count <= number/2) 
   {
      remainder = number;
      while (remainder >= count)    // loop to calculate the remainder
         remainder = remainder - count;
      if (remainder == 0)
         cout << setw(4) << count ;
      count = count+1;
   }
   cout << setw(4) << number << endl;   // report the number itself

   return 0;
}
