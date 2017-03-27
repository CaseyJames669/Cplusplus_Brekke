// This is an example of file IO.  There are 5 basic parts to it.

// 1. include filestream library
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
// 2. declare filestream variables
   ifstream infile;
   ofstream outfile;
   double num1, num2, sum;
// 3. open the file
   infile.open("data");
// 4. use it just like cin
   infile >> num1 >> num2;
// 5. close the file when done
   infile.close();
   sum = num1+num2;
// 3. open the file
   outfile.open("result");
// 4. use it just like cout
   outfile << fixed << showpoint << setprecision(2);
   outfile << num1 << " + " << num2 << " = " << sum << endl;
// 5. close the file when done
   outfile.close();
   return 0;
}
   
