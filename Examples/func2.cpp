#include <iostream>
#include <string>
using namespace std;

// this is bad because this function does 2 things
// 1) finds the sum 2) outputs it
// this function is not reusable
void findsum(int num1,int num2)
{
   int sum = num1+num2;
   cout << "the sum is " << sum << endl;
   return;  // optional
}

// better
int findsum2(int num1,int num2)
{
   int sum = num1+num2;
   return sum;
}


int main()
{
   // a function that does not return a valid is called on a line by itself
   findsum(5,3);
   int a=7, b=4, c=9, d=3;
   findsum(a,b); // no reference to type in function call
   findsum(c,d);
   // if a function returns a value, you must do something with it
   int total = findsum2(a,b) + findsum2(c,d);
   cout << "the total is " << total << endl;
   return 0;
}

