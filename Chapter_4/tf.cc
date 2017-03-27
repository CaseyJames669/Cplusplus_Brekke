// file:  tf.cc
// author:  Rick Walker
// chap 4 example

// demonstrates the effects of order of operations on precision
// and the dangers of using "==" with floating point values.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "The value of \"true\" is " << true << endl;
    cout << "The value of \"false\" is " << false << endl;
    return 0;
}
