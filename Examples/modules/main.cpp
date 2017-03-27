// File:    main.cpp
// Author:  Dan Brekke
// Program: class example
// Date:    

// Description: This file contains the main function
// The program will read ints from the file 'data' into an array,
// output them to a file 'results' along with the average value
// and the biggest value

#include <iostream>
#include <fstream>
#include <iomanip>
#include "constants.h"  // quotes for your own includes
using namespace std;

// function prototypes
// parameter names are optional in prototypes, use if enhances readability
int biggest(const int numbers[],int count);
double findavg(const int numbers[],int count);
void output(ofstream&, const int numbers[], int count);
void read(int numbers[], int& count);


// Function: main
// Description: the main function of the program
// Input:  <none>
// Output: <none>
// Preconditions:  the input file 'data' must exist and contain all ints
// Postconditions: the output file 'results' is created

// NOTES (not typical documentation)
// main is for declaring variables and calling functions
// Note: the input file is opened and closed in the read function but
// the output file is opened and closed in the main function because
// there is output going to the file from more than one function,
// output (so the stream is passed as a parameter) and main.
int main()
{
   ofstream ofs;
   int numbers[arraysize];
   int count;
   read(numbers,count);
   if (count > 0)
   {
      ofs.open("results");
      ofs << fixed << showpoint << setprecision(2);
      output(ofs,numbers,count);  // output the array to the file
      ofs << "average is " << findavg(numbers,count) << endl;
      ofs << "the biggest is " 
         << biggest(numbers,count) << endl;
      ofs.close();
      cout << "output written to the file 'results'\n";
   }
   else
      cout << "output file 'results' not written\n";
   return 0;
}
