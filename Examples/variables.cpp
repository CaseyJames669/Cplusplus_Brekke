#include <iostream>
using namespace std;

int main()
{
   int a,b,c,d=0;
   cout << a << endl;
   cout << b << endl;
   cout << c << endl;
   cout << d << endl;
   int score = 87;
   int maxscore = 100;
   double pct = static_cast<double>(score)/maxscore*100;
   cout << "pct: " << pct << endl;

   return 0;
}
