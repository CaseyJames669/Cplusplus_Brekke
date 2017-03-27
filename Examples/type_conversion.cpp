#include <iostream>
using namespace std;

int main()
{
   int i;
   float f;
   char c;
   bool b;
   i = 23;
   f = 54.74;
   c = 'A';
   b = false;
//   b = -234;
//   i = static_cast<int>(f);
//   f = static_cast<float>(i);
//   c = static_cast<char>(100);
   i = static_cast<int>('F');
   cout << "i is " << i << endl;
   cout << "f is " << f << endl;
   cout << "c is " << c << endl;
   cout << "b is " << b << endl;
   return 0;
}

