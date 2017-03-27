#include <iostream>
 
#include "myString.h"
#include "arrayListType.h"

using namespace std;

int main()
{
	arrayListType<int> intList(100);						//Line 1
	arrayListType<newString> stringList;					//Line 2

	int counter;											//Line 3
	int number;												//Line 4

	cout << "List 5: Processing the integer list"
		 << endl;											//Line 5
	cout << "List 6: Enter 5 integers: ";					//Line 6
										
	for (counter = 0; counter < 5; counter++)				//Line 7
	{	
		cin >> number;										//Line 8
		intList.insertAt(counter, number);					//Line 9
	}

	cout << endl;											//Line 10
	cout << "List 11: The list you entered is: ";			//Line 11
	intList.print();										//Line 12
	cout << endl;											//Line 13

	cout << "Line 14: Enter the item to be deleted: ";		//Line 14
	cin >> number;											//Line 15
	intList.remove(number);									//Line 16
	cout << "Line 17: After removing " << number
		 << " the list is:" << endl;						//Line 17
	intList.print();										//Line 18
	cout << endl;											//Line 19

	newString str;											//Line 20

	cout << "Line 21: Processing the string list"
		 << endl;											//Line 21

	cout << "Line 22: Enter 5 strings: ";					//Line 22

	for (counter = 0; counter < 5; counter++)				//Line 23
	{
		cin >> str;											//Line 24
		stringList.insertAt(counter, str);					//Line 25
	}

	cout << endl;											//Line 26
	cout << "Line 27: The list you entered is: "
		 << endl;											//Line 27
	stringList.print();										//Line 28
	cout << endl;											//Line 29

	cout << "Line 30: Enter the string to be deleted: ";	//Line 30
	cin >> str;												//Line 31
	stringList.remove(str);									//Line 32
	cout << "Line 33: After removing " << str
		 << " the list is:" << endl;						//Line 33
	stringList.print();										//Line 34
	cout << endl;											//Line 35	

	int intListSize;										//Line 36

	cout << "Line 37: Enter the size of the integer "
		 << "list: ";										//Line 37
	cin >> intListSize;										//Line 38

	arrayListType<int> intList2(intListSize);				//Line 39

	cout << "Line 40: Processing the integer list"
		 << endl;											//Line 40
	cout << "Line 41: Enter " << intListSize
		 << " integers: ";									//Line 41

	for (counter = 0; counter < intListSize; counter++)		//Line 42
	{
		cin >> number;										//Line 43
		intList2.insertAt(counter, number);					//Line 44
	}

	cout << endl;											//Line 45
	cout << "Line 46: The list you entered is: " << endl;	//Line 46
	intList2.print();										//Line 47
	cout << endl;											//Line 48

	return 0;
}

