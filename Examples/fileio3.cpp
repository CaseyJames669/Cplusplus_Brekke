#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{

   ifstream infile;
   ofstream outfile;
   string name;
   int age;
   infile.open("people3");
   outfile.open("results");
   getline(infile,name);
// cerr << "name is " << name << endl;
   while (!infile.eof())
   {
      infile >> age;
      infile.ignore(80,'\n');
// cerr << "age is " << age << endl;
      outfile << name << ' ' << age << endl;
      getline(infile,name);
// cerr << "name is " << name << endl;
   }
   infile.close();
   outfile.close();
   return 0;
}
