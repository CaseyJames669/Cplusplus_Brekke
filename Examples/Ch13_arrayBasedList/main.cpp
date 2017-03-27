#include <iostream>
using namespace std;
#include "arrayListType.h"

int main()
{
   arrayListType list(5);
   int num;
   cout << "enter ints, 0 ends list\n";
   cout << "enter int: ";
   cin >> num;
   while (num != 0 && !list.isFull())
   {
      list.insertEnd(num);
      cout << "enter int: ";
      cin >> num;
   }
   
   if (num != 0)
      cout << "list is full, input ended\n";
   if (list.isEmpty())
      cout << "no values were entered into the list\n";
   else
   {
      list.print();
      for (int i=0; i<list.listSize(); i++)
      {
         list.retrieveAt(i,num);
         cout << num << endl;
      }
   }
   return 0;
}

