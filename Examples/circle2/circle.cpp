// File:     circle.cpp
// Author:   Dan Brekke
// Date: 

// Description
// This file contains the implementation for a circle class

#include "circle.h"
#include <iostream>
using namespace std;

Circle::Circle(double r)
{
   setRadius(r);
}

void Circle::setRadius(double r)
{
   rad = r;
}

double Circle::radius() const
{
   return rad;
}

double Circle::diameter() const
{
   return radius()*2;
}

double Circle::area() const
{
   return PI*radius()*radius();
}

double Circle::circumference() const
{
   return 2*PI*radius();
}

bool Circle::operator==(const Circle& other) const
{
   cerr << "in the == operator" << endl;
   if (radius() == other.radius())
      return true;
   else
      return false;
}

bool Circle::operator<(const Circle& other) const
{
   cerr << "in the < operator" << endl;
   return radius() < other.radius();
}

bool Circle::operator!=(const Circle& other) const
{
   cerr << "in the != operator" << endl;
   return !(*this == other);
}

bool Circle::operator<=(const Circle& other) const
{
   cerr << "in the <= operator" << endl;
   return *this < other || *this == other;
}

bool Circle::operator>(const Circle& other) const
{
   cerr << "in the > operator" << endl;
   return !(*this <= other);
}

bool Circle::operator>=(const Circle& other) const
{
   cerr << "in the >= operator" << endl;
//    return *this > other || *this == other;
   return !(*this < other);
}

ostream& operator<< (ostream& out, const Circle& c)
{
   out << "radius: " << c.radius();
   return out;
}

istream& operator>> (istream& in, Circle& c)
{
   double temp;
   in >> temp;
   c.setRadius(temp);
}

