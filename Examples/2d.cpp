#include <iostream>
#include <iomanip>
using namespace std;

const int numrows=4;
const int numcols=3;

// the function signature requires the number of columns to be specified
void out (int values[][numcols])
{
   for (int i=0; i<numrows; i++)
   {
      for (int j=0; j<numcols; j++)
         cout << setw(3) << values[i][j];
      cout << endl;
   }
}

int main()
{
   int values[numrows][numcols] = 
         { {1,2,3} , {4,5,6}, {7,8,9}, {10,11,12} };
   out(values);
   return 0;
}

