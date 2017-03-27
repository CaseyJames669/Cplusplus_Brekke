#include <iostream>
#include <string>
using namespace std;

int main()
{
   string name;
   int age;
   char ch;
   cout << "enter your name: ";
   getline(cin,name,'\n');  // '\n' is the default so it is not needed
   while (name != "")
   {
      cout << "enter your age: ";
      cin >> age;
      cin.ignore(80,'\n');
      cout << "your name is " << name 
           << " and you are " << age << " years old!"<< endl;
      cout << "enter your name: ";
      getline(cin,name);
   }
      
   return 0;
}
