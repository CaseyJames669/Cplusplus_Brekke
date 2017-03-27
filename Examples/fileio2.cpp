#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   ifstream infile;
   int num;
   int sum = 0;
   infile.open("numbers");
   infile >> num;
   while (!infile.eof())
   {
      cout << num << ' ';
      sum += num;
      infile >> num;
   }
   infile.close();
   cout << endl;
   cout << "sum is " << sum << endl;
   return 0;
}
