#include <iostream>
#include <string>
using namespace std;

void greeting()
{
   cout << "Hello" << endl;
}

void greeting2(string name) // 'name' is the formal parameter
{
   cout << "Hello " << name << endl;
}


int main()
{
//    greeting();
//    greeting();
   greeting();
   greeting2("Dan");
   string somebody="John Doe";
   // you don't put the type of the actual parameter in the
   // function call
   greeting2(somebody); // 'somebody' is the actual parameter
//    greeting2(234);  // types must match
   return 0;
}

