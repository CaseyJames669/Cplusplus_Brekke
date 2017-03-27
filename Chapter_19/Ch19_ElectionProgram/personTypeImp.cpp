//personTypeImp.cpp

#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

void personType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}

string personType::getFirstName() const
{
	return firstName;
}

string personType::getLastName() const
{
	return lastName;
}

	//constructor
personType::personType(string first, string last) 

{ 
	firstName = first;
	lastName = last;
}

bool personType::operator==(const personType& right) const
{
	return(firstName == right.firstName 
		   && lastName == right.lastName);
}

bool personType::operator!=(const personType& right) const
{
	return(firstName != right.firstName 
		   && lastName != right.lastName);
}

bool personType::operator<=(const personType& right) const
{
	return(lastName <= right.lastName ||
		   (lastName == right.lastName && 
		    firstName <= right.firstName));
}

bool personType::operator<(const personType& right) const
{
	return(lastName < right.lastName ||
	      (lastName == right.lastName && 
		   firstName < right.firstName));
}

bool personType::operator>=(const personType& right) const
{
	return(lastName >= right.lastName ||
		   (lastName == right.lastName && 
		     firstName >= right.firstName));
}

bool personType::operator>(const personType& right) const
{
	return(lastName > right.lastName ||
		   (lastName == right.lastName && 
		    firstName > right.firstName));
}

istream& operator>>(istream& isObject, personType& pName)
{
	isObject >> pName.firstName >> pName.lastName;
	
 	return isObject;
}

ostream& operator<<(ostream& osObject, const personType&  pName)
{
	 osObject << pName.firstName << " " << pName.lastName;
	 
 	return osObject;
}
