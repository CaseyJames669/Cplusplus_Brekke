#ifndef H_OrderedListType
#define H_OrderedListType

#include <iostream>
#include "arrayListType.h"

using namespace std;

template<class elemType>
class orderedArrayListType: public arrayListType<elemType>
{
public:
	void selectionSort();

	int binarySearch(const elemType& item) const;

	orderedArrayListType(int size = 100);

private:
	void swap(int first, int second);
	int minLocation(int first, int last);
};


template<class elemType>
void orderedArrayListType<elemType>::selectionSort()
{
	int loc, minIndex;

	for (loc = 0; loc < length; loc++)
	{
		minIndex = minLocation(loc, length - 1);
		swap(loc, minIndex);
	}
}


template<class elemType>
int orderedArrayListType<elemType>::binarySearch(const elemType& item) const
{
	int first = 0;
	int last = length - 1;
	int mid;

	bool found = false;

	while (first <= last && !found)
	{
		mid = (first + last) / 2;

		if (list[mid] == item)
			found = true;
		else
			if (list[mid] > item)
				last = mid - 1;
			else
				first = mid + 1;
	}

	if (found)
		return mid;
	else 
		return -1;
}// end binarySearch

template<class elemType>
void orderedArrayListType<elemType>::swap(int first, int second)
{
	elemType temp;

	temp = list[first];
	list[first] = list[second];
	list[second] = temp;
}

template<class elemType>
int orderedArrayListType<elemType>::minLocation(int first, int last)
{
	int loc, minIndex;

	minIndex = first;

	for (loc = first + 1; loc <= last; loc++)
		if (list[loc] < list[minIndex])
			minIndex = loc;

	return minIndex;
}


template<class elemType>
orderedArrayListType<elemType>::orderedArrayListType(int size)
   : arrayListType<elemType>(size)
{
}


#endif