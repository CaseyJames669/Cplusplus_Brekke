#include <iostream>
#include "orderedArrayListType.h"

using namespace std;

int main()
{
	orderedArrayListType<int> list;						//Line 1
	int num;											//Line 2

	cout << "Line 3: Enter numbers ending with -999"
         << endl;										//Line 3

	cin >> num;											//Line 4

	while (num != -999)									//Line 5
	{
		list.insert(num);								//Line 6
		cin >> num;										//Line 7
	}

	cout << "Line 8:The list before sorting:" << endl;	//Line 8
	list.print();									    //Line 9
	cout << endl;									    //Line 10

	list.selectionSort();							    //Line 11

	cout << "Line 12: The list after sorting:" << endl;	//Line 12
	list.print();									    //Line 13
	cout << endl;										//Line 14

	return 0;
}


