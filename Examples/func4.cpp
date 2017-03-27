#include <iostream>
using namespace std;

// function input: x and y
// function output: x and y
void swap(int& x, int& y)
{
//    cout << "address of x is " << &x << endl;
//    cout << "address of y is " << &y << endl;   
   int temp=x;
   x=y;
   y=temp;
}

int main()
{
   int smaller, bigger;
//    cout << "address of smaller is " << &smaller << endl;
//    cout << "address of bigger is " << &bigger << endl;
   cout << "enter 2 ints: ";
   cin >> smaller >> bigger;
   if (smaller > bigger)
      swap(smaller, bigger);
   cout << "smaller is " << smaller
        << " and bigger is " << bigger << endl;
   return 0;
}
