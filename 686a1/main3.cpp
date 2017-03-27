//Casey Bladow
//main3.cpp 
//1-22-13
//
//Inputs a person's first name as a string, their height in centimeters as an
//int, and their weight in kilograms as an int, then output the name, height
//in feet and inches (ints), and weight in pounds (int). Use constants for
//the conversion.

#include <iostream>
#include <string>
using namespace std;

const double cms_per_inch = 2.54;
const float kgs_per_lb = 2.2046;

int main()
{
  string firstName;
  int cm = 0;
  int inches = 0;
  int kgs = 0;
  int feet = 0;

  cout << "Enter user's first name: " ;
  cin >> firstName;
  
  cout << "Enter user's height (in centimeters): ";
  cin >> cm;
  
  cout << "Enter user's weight (in kilograms): ";
  cin >> kgs;
  
  inches = cm / cms_per_inch;
  feet = inches / 12;
  inches = inches - (feet*12);
  
  int lbs = kgs_per_lb * kgs;
    
  cout << "Name: " << firstName << endl;
  cout << "Height: " << feet << " feet and " << inches << " inches" << endl;
  cout << "Weight: " << lbs << " pounds" << endl;
  
  return 0;
}