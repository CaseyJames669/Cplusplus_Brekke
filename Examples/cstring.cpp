#include <iostream>
using namespace std;

int main()
{
   char name[]={'D','a','n',' ','B','r','e','k','k','e'};
   cout << name << endl;
   for (int i=0; i<15; i++)
      cout << static_cast<int>(name[i]) << ' ';
   cout << endl;
   
   char name2[]="Dan Brekke"; // null '\0' is added
   cout << name2 << endl;
   for (int i=0; i<15; i++)
      cout << static_cast<int>(name2[i]) << ' ';
   cout << endl;

   cout << sizeof(name) << endl;
   cout << sizeof(name2) << endl;
   
   char word1[]="hello";
   char word2[]="hello";
   // comparison doesn't work
   if (word1 == word2)
      cout << "EQUAL\n";
   else
      cout << "NOT EQUAL\n";
   // assignment doesn't work
//    word1 = word2;
   
// note below that if you enter a first and last name,
// the first name will be read by the first cin and the
// last name will be read by the second cin without
// stopping to input a second name
   char name3[20];
   cout << "enter your name: ";
   cin >> name3;
   cout << "your name is " << name3 << endl;
   cout << "enter another name: ";
   cin >> name3;
   cout << "your another name is " << name3 << endl;
   return 0;
}
