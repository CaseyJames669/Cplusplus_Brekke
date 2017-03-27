#include <iostream>
#include "arrayListType.h"
#include "groceryitem.h"
using namespace std;

void addItem(arrayListType& grocerylist)
{
   string itemname;
   int num;
   GroceryItem item;
   if (!grocerylist.isFull())
   {
      cout << "enter new item: ";
      getline(cin,itemname,'\n'); 
      cout << "enter quantity: ";
      cin >> num;
      cin.ignore(80,'\n');
      item.SetItem(itemname);
      item.SetCount(num);
      grocerylist.insertEnd(item);
   }
   else
      cout << "list is full\n";
}
