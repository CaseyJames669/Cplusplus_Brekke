#include <iostream>
#include "arrayListType.h"

using namespace std;

void testCopyConstructor(arrayListType testList);

int main()
{
	arrayListType list;									//Line 1
	int num;											//Line 2

	cout << "Line 3: Enter numbers ending with -999"
         << endl;										//Line 3

	cin >> num;											//Line 4

	while(num != -999)									//Line 5
	{
		list.insert(num);								//Line 6
		cin >> num;										//Line 7
	}

	cout << "Line 8: The list you entered is: "
  	     << endl;										//Line 8
	list.print();										//Line 9
	cout << "Line 10: The list size is: "
	     << list.listSize() << endl;					//Line 10

	cout << "Line 11: Enter the item to be deleted: ";	//Line 11
	cin >> num;											//Line 12
	cout << endl;										//Line 13

	list.remove(num);									//Line 14

	cout << "Line 15: After removing " << num
	     << " the list is: " << endl;					//Line 15	
	list.print();										//Line 16
	cout << "Line 16: The list size is: "
	     << list.listSize() << endl;					//Line 17

	  //test copy constructor

	testCopyConstructor(list);							//Line 18

	cout << "Line 19: The list after the copy "
	     << "constructor." << endl;						//Line 19
	list.print();										//Line 20
	cout << "Line 21: The list size is: "
	     << list.listSize() << endl;					//Line 21

	return 0;											//Line 22
}

void testCopyConstructor(arrayListType testList)
{
	cout << "Line 23: Inside the function "
	     << "testCopyConstructor." << endl;				//Line 23
	
	testList.print();									//Line 24

	cout << "Line 25: The list size is: "
	     << testList.listSize() << endl;				//Line 25
}

