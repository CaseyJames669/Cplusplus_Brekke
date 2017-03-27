#include <iostream>
#include <string>
#include <fstream>
#include "candidateType.h"
#include "orderedArrayListType.h"

using namespace std;

const int noOfCandidates = 6;

void fillNames(ifstream& inFile, 
			   orderedArrayListType<candidateType>& cList);
void processVotes(ifstream& inFile, 
				  orderedArrayListType<candidateType>& cList);
void addVotes(orderedArrayListType<candidateType>& cList);

void printHeading();
void printResults(orderedArrayListType<candidateType>& cList);

int main()
{
	orderedArrayListType<candidateType> 
		                candidateList(noOfCandidates);
	
	candidateType temp;
	
	ifstream inFile;
	
	inFile.open("a:\\candData.txt");
	if (!inFile)											
	{
		cout << "Input file (candData.txt) does not exit. " 
			 << "Program terminates!!" << endl;
		return 1;
	}
	
	fillNames(inFile, candidateList);
	
	candidateList.selectionSort();
	
	inFile.close();
	inFile.clear();
	
	inFile.open("a:\\voteData.txt");  
	if (!inFile)												
	{
		cout << "Input file (voteData.txt) does not exit. "
			 << "Program terminates!!" << endl;
		return 1;
	}
	
	processVotes(inFile, candidateList);
	
	addVotes(candidateList);
	
	printHeading();
	printResults(candidateList);

	return 0;
}

void fillNames(ifstream& inFile, 
			   orderedArrayListType<candidateType>& cList)
{
	string firstN;
	string lastN;
	int i;
	candidateType temp;

	for (i = 0; i < noOfCandidates; i++)
	{
		inFile >> firstN >> lastN;
		temp.setName(firstN, lastN);
		cList.insertAt(i, temp);
	}
}

void processVotes(ifstream& inFile, 
				  orderedArrayListType<candidateType>& cList)
{
	string firstN;
	string lastN;
	int region;
	int votes;
	int candLocation;
	
	candidateType temp;
	
	inFile >> firstN >> lastN >> region >> votes;
	
	temp.setName(firstN, lastN);
	temp.setVotes(region, votes);
	
	while (inFile)
	{
		candLocation = cList.binarySearch(temp);

		if (candLocation != -1)
		{
			cList.retrieveAt(candLocation, temp);
			temp.updateVotesByRegion(region, votes);
			cList.replaceAt(candLocation, temp);
		}
		
		inFile >> firstN >> lastN >> region >> votes;
	
		temp.setName(firstN, lastN);
		temp.setVotes(region, votes);
	}
}
	
void addVotes(orderedArrayListType<candidateType>& cList)
{
	int i;
	
	candidateType temp;
	
	for (i = 0; i < noOfCandidates; i++)
	{
		cList.retrieveAt(i, temp);
		temp.calculateTotalVotes();
		cList.replaceAt(i, temp);
	}
}

void printHeading()
{
    cout << "      --------------------Election Results---------"
		 << "-----------" << endl << endl;
    cout << "                  		         Votes" << endl;
    cout << "    Candidate Name     Region1  Region2  Region3  "
 		 << "Region4   Total"<<endl;
    cout << "---------------------  -------  -------  "
 		 << "-------  -------  ------" << endl;
}

void printResults(orderedArrayListType<candidateType>& cList)
{
	int i;
	
	candidateType temp;
	int largestVotes = 0;
	int sumVotes = 0;
	int winLoc = 0;
	
	for (i = 0; i < noOfCandidates; i++)
	{
		cList.retrieveAt(i, temp);
		temp.printData();
		sumVotes += temp.getTotalVotes();
		
		if (largestVotes < temp.getTotalVotes())
		{
			largestVotes = temp.getTotalVotes();
			winLoc = i;
		}
	}
	
	cList.retrieveAt(winLoc, temp);
	cout << endl << "Winner: ";
	
	cout << temp.getFirstName() << " " << temp.getLastName();
	cout << ",  Votes Received: " << temp.getTotalVotes()
		 << endl << endl;
	cout << "Total votes polled: " << sumVotes << endl;
}
	
