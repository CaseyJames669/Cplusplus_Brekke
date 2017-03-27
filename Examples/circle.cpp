#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.141592654;

double area(double radius);
double circumference(double radius);
double diameter(double radius);

int main()
{
   cout << fixed << showpoint << setprecision(2);
   double radius;  
   
   cout << "enter radius: ";
   cin >> radius;

   cout << left << setw(14) << "radius:"
        << right << setw(10) << radius << endl;
   cout << left << setw(14) << "diameter:"
        << right << setw(10) << diameter(radius) << endl;
   cout << left << setw(14) << "area:"
        << right << setw(10) << area(radius) << endl;
   cout << left << setw(14) << "circumference:"
        << right << setw(10) << circumference(radius) << endl;
 
   return 0;
}

double area(double radius)
{
   return pi*radius*radius;
}

double circumference(double radius)
{
   return 2*pi*radius;
}

double diameter(double radius)
{
   return 2*radius;
}

