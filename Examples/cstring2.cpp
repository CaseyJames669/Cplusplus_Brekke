#include <iostream>
using namespace std;

int main()
{
   char name3[20];
   char ch;
   int count=0;
   cout << "enter your name: ";
//    cin >> name3;
   cin.get(ch);
   while (ch != '\n' && count < 20)
   {
      name3[count++] = ch;
      cin.get(ch);
   }
   name3[count] = '\0';
   cout << "your name is " << name3 << endl;

   cout << "enter another name: ";
//    cin >> name3;
   count = 0;
   cin.get(ch);
   while (ch != '\n' && count < 20)
   {
      name3[count++] = ch;
      cin.get(ch);
   }
   name3[count] = '\0';
   cout << "another name is " << name3 << endl;
   
   return 0;
}
