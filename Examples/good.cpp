// This program will input a Celsius temperature and output the
// Farenheit temperature equivalent.

// This program also points out something else, but that's a secret for now.

#include <iostream>
using namespace std;
int main()
{
   double celsius,fahrenheit; 
   cout << "enter a celsius temperature: ";
   cin >> celsius; 
   fahrenheit = (static_cast<float>(9)/5) * celsius + 32;
   cout << celsius << " degrees celsius is "
        << fahrenheit << " degrees fahrenheit\n";
   return 0;
}

