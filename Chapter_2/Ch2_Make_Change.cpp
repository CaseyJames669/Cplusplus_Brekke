// ***********************************************************
// Program Make Change: Given any amount of change expressed
// in cents, this program computes the number of half-dollars,
// quarters, dimes, nickels, and pennies to be returned,
// returning as many half-dollars as possible, then quarters,
// dimes, nickels, and pennies in that order.
//************************************************************

        //header file
#include <iostream>

using namespace std;

        //named constants
const int Halfdollar = 50;
const int Quarter  = 25;
const int Dime = 10;
const int Nickel = 5;

int main()
{
        //declare variable
    int change;

        //Statements: Step 1 – Step 12
    cout << "Enter change in cents: ";                //Step 1
    cin >> change;                                    //Step 2
    cout << endl;
    cout << "The change you entered is " << change
         << endl;                                     //Step 3

    cout << "The number of half-dollars to be returned "
         << "is " << change / Halfdollar 
         << endl;                                     //Step 4
    change = change % Halfdollar;                     //Step 5

    cout << "The number of quarters to be returned is "
         << change / Quarter << endl;                 //Step 6
    change = change % Quarter;                        //Step 7

    cout << "The number of dimes to be returned is "
         << change / Dime << endl;                    //Step 8
    change = change % Dime;                           //Step 9

    cout << "The number of nickels to be returned is "
         << change / Nickel << endl;                  //Step 10
    change = change % Nickel;                         //Step 11

    cout << "The number of pennies to be returned is "
         << change << endl;                           //Step 12

    return 0;
}
