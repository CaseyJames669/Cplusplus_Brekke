// I should have put in documenation
#include <iostream>
using namespace std;

const double pi = 3.141592654;

int main()
{
   double radius;  
   double area;
   
   cout << "enter radius: ";
   cin >> radius;

   area = pi * radius * radius;  

   cout << "radius: " << radius << endl;
   cout << "area: " << area <<endl;
 
   return 0;
}


