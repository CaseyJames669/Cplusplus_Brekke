#include <iostream>
#include <iomanip>
#include <string>
#include "candidateType.h"

using namespace std;

void candidateType::setVotes(int region, int votes)
{
	votesByRegion[region - 1] = votes;
}

void candidateType::updateVotesByRegion(int region, int votes)
{
	votesByRegion[region - 1] = votesByRegion[region - 1]
	                            + votes;
}

void candidateType::calculateTotalVotes()
{
	int i;
	
	totalVotes = 0;

	for(i = 0; i < noOfRegions; i++)
		totalVotes += votesByRegion[i];
}

int candidateType::getTotalVotes()  const
{
	return totalVotes;
}

void candidateType::printData()  const
{
	cout << left
		 << setw(10) << firstName << " "
		 << setw(10) << lastName << " ";

	cout << right;
	for (int i = 0; i < noOfRegions; i++)
		cout << setw(8) << votesByRegion[i] << " ";
	cout << setw(7) << totalVotes << endl;
}

candidateType::candidateType()
{
	for (int i = 0; i < noOfRegions; i++)
		votesByRegion[i] = 0;

	totalVotes = 0;
}

bool candidateType::operator==(const candidateType& right) const
{
	return(firstName == right.firstName 
		   && lastName == right.lastName);
}

bool candidateType::operator!=(const candidateType& right) const
{
	return(firstName != right.firstName 
		   && lastName != right.lastName);
}

bool candidateType::operator<=(const candidateType& right) const
{
	return(lastName <= right.lastName ||
		   (lastName == right.lastName && 
		    firstName <= right.firstName));
}

bool candidateType::operator<(const candidateType& right) const
{
	return(lastName < right.lastName ||
	      (lastName == right.lastName && 
		   firstName < right.firstName));
}

bool candidateType::operator>=(const candidateType& right) const
{
	return(lastName >= right.lastName ||
		   (lastName == right.lastName && 
		    firstName >= right.firstName));
}

bool candidateType::operator>(const candidateType& right) const
{
	return(lastName > right.lastName ||
		   (lastName == right.lastName && 
		    firstName > right.firstName));
}

const candidateType& candidateType::operator=
                                  (const candidateType& right)
{
	if (this != &right)  // avoid self-assignment
	{
		firstName = right.firstName;
		lastName = right.lastName;

		for (int i = 0; i < noOfRegions; i++)
			votesByRegion[i] = right.votesByRegion[i];

		totalVotes = right.totalVotes;
	}
	
 	return *this;
}

const candidateType& candidateType::operator=
                              (const personType& right)
{
	firstName = right.getFirstName();
	lastName = right.getLastName();

	return *this;
}

