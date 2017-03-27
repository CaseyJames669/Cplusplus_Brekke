// file:  example.cc
// author:  Rick Walker
// chap 4 example

// demonstrates the effects of order of operations on precision
// and the dangers of using "==" with floating point values.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float one_third = 1.0/3.0;  // 1/3 in floating point

    // set up output formatting
    cout << fixed << showpoint << setprecision(8);    
    
    // compute first expression and report
    cout << "Is 3.0 * (1.0 / 3.0) equal to 1.0 ?\n";
    cout << "Well, 3.0 * (1.0 / 3.0) = " << 3.0 * one_third << endl;

    // supply the appropriate comment   
    if (3.0 * one_third == 1.0)
        cout << "Yes ... Amazing!!!!\n";
    else
        cout << "No ... I didn't think so!!\n";

    // next evaluation and report
    cout << endl << "BUT ... \n"
         << "3.0 * 1.0 / 3.0 = " << 3.0 * 1.0 / 3.0 << endl;

    // and associated comment
    if (3.0 * 1.0 / 3.0 == 1.0)
        cout << "Go figure!!!!\n";
    else
        cout << "Oops, it's not.  Well, so much for this example!!\n";

    return 0;
}
