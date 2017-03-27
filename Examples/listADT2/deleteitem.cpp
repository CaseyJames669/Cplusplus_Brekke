#include <iostream>
#include <string>
#include "arrayListType.h"
#include "groceryitem.h"
using namespace std;

void deleteItem(arrayListType& grocerylist)
{
   GroceryItem item;
   string itemname;
   int pos;
   cout << "enter item to be removed: ";
   getline(cin,itemname,'\n'); 
   item.SetItem(itemname);
   pos = grocerylist.seqSearch(item);
   if (pos >= 0)
   {
      grocerylist.removeAt(pos);
      cout << "item deleted\n";
   }
   else
      cout << "item not in list\n";
}
