#include <iostream>
using namespace std;

struct example
{
   int i;
   float f;
   char c;
};

int main()
{
   example s;
   s.i = 23;
   s.f = 8.234;
   s.c = 'A';
   cout << s.i << ' ' << s.f << ' ' << s.c << endl;
   example array[10];
   for (int i = 0; i<10; i++)
   {
      array[i].i = 0;
      array[i].f = 0;
      array[i].c = 'X';
   }
   return 0;
}
