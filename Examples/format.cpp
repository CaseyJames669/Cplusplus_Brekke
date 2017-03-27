#include <iostream>
#include <iomanip>  // needed for formatting functions
using namespace std;

int main()
{
   // fixed - used fixed-point notation (not scientific or other)
   //       - only needs to be done once
   // showpoint - always show the decimal point
   //       - only needs to be done once
   // setprecision(n) - sets output of float to n decimal places
   //       - only needs to be done once, or if a change desired
   cout << fixed << showpoint << setprecision(2);
   
   // setw(n) - sets the width of the output field
   //         - only effects the next output value
   double x=43.236, y=432.4, z=28;
   cout << setw(10) << x << endl;
   cout << setw(10) << y << endl;
   cout << setw(10) << z << endl;
   cout << "-------------------------------------\n";
   
   // default of output values is to right justify
   string s1 = "hello there";
   string s2 = "how are you?";
   string s3 = "I am fine";
   cout << setw(20) << s1 << endl;
   cout << setw(20) << s2 << endl;
   cout << setw(20) << s3 << endl;
   cout << "-------------------------------------\n";
   
   // right - right justify, stays right until changed
   // left - left justify, stays left until changed
   cout << setw(20) << left << s1 << setw(10) << right << x << endl;
   cout << setw(20) << left << s2 << setw(10) << right << y << endl;
   cout << setw(20) << left << s3 << setw(10) << right << z << endl;
   cout << "-------------------------------------\n";

   // change the precision
   cout << setprecision(4);
   cout << setw(20) << left << s1 << setw(10) << right << x << endl;
   cout << setw(20) << left << s2 << setw(10) << right << y << endl;
   cout << setw(20) << left << s3 << setw(10) << right << z << endl;

   return 0;
}
