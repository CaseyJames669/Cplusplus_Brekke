// file:  demo.cc
// author:  Rick Walker
// Type demo

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char char_var = '5';
    string str_var = "5";
    string fred = "Fred",
           barney = "Barney";
    string zebra = "Zebra";
    string ardvark = "ardvark";
    int int_var = 5;
    string f_name,          // holds user's first name
           l_name,          // holds user's last name
           name;            // computed user's full name
    
    cout << "23: Please enter your first name: ";
    cin >> f_name;
    cout << endl << "25: Greetings, " << f_name << " we're going to demonstrate the difference between\n"
         << "26: characters, strings, and integers.\n\n";
         
    cout << "28: Printing the char variable char_var, holding '5': " << char_var << endl;
    cout << "29: Printing the ASCII value in char_var: " << static_cast<int>(char_var) << endl << endl;
    
    cout << "31: Printing the ASCII value of the character 'a': " << static_cast<int>('a') << endl;
    cout << "32: Printing the ASCII value of the character 'A': " << static_cast<int>('A') << endl << endl;
    
    cout << "34: Printing the int variable holding the value 5: " << int_var << endl;
    cout << "35: Printing the string object holding the value \"5\": " << str_var << endl;
    cout << "36: Printing the \"sum\" of str_var and char_var: " << str_var + char_var << endl;
    cout << "37: Printing the string object holding the value \"5\": " << str_var << endl <<endl;

    cout << "39: Now, print the \"sum\" \"5\" + '5': " << "5" + '5' << endl;
    
    // Fred and Barney
    cout << "42: Is fred < barney? ... Answer: " << (fred < barney) << endl;
    cout << "43: Is \"Fred\" < \"Barney\"? ... Answer: " << ("Fred" < "Barney") << endl;
    cout << "44: Is \"Fred\" < barney? ... Answer: " << ("Fred" < barney) << endl << endl;
    
    cout << "46: Is zebra (contains \"Zebra\") < ardvark (contains \"ardvark\")? ... Answer: " << (zebra < ardvark) << endl << endl;
    
    cout << "48: Please enter your last name: ";
    cin  >> l_name;
    
    name = f_name + ' ' + l_name;
    cout << "52: Your name in the format \"first last\" is: " << name << endl;
    
    name = l_name + ", " + f_name;
    cout << "55: Your name in the format \"last, first\" is: " << name << endl;
    
    cout << endl << "57: Bye" << endl;
    
    return 0;
}
