#include <iostream>
#include <string>
#include "arrayListType.h"
#include "groceryitem.h"
using namespace std;

void totalOfItem(arrayListType grocerylist)
{
   GroceryItem item;
   string itemname;
   int pos;
   cout << "enter item: ";
   getline(cin,itemname,'\n'); 
   item.SetItem(itemname);
   pos = grocerylist.seqSearch(item);
   if (pos >= 0)
   {
      grocerylist.retrieveAt(pos,item);
      cout << "number of " << item.GetItem()
           << " = " << item.GetCount() << endl;
   }
   else
      cout << "item not in list\n";
}
