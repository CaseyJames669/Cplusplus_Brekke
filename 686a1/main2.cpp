//Casey Bladow
//main2.cpp 
//1-22-13
//
//Inputs a floating point value for the radius of a circle and outputs
//the diameter, circumference, and area of the circle. Declare and 
//use a constant for pi.

#include <iostream>
using namespace std;

const double pi = 3.141592654;

int main()
{
  double radius;  
  double area;
  double diameter;
  double circumference;
  
  cout << "Enter Radius: ";
  cin >> radius;

  area = pi * radius * radius;
  diameter = 2 * radius;
  circumference = 2 * pi * radius;

  cout << "Diameter:  " << diameter << endl;
  cout << "Circumference: " << circumference << endl;
  cout << "Area: " << area << endl;
 
  return 0;
}