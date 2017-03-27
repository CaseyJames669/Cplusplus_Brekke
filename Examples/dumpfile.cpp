#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
   ifstream infile;
   char ch;
   if (argc != 2)
      cout << "usage: " << argv[0] << " <inputfile>\n";
   else
   {
      infile.open(argv[1]);
      if (infile.fail())
         cout << "error opening input file '" << argv[1] << "'" << endl;
      else
      {
         infile.get(ch);
         while (!infile.eof())
         {
            int value = static_cast<int>(ch);
            cout << "char: '";
            if (value == 10)
               cout << "\\n'   ASCII: " << value << endl;
            else if (value == 9)
               cout << "\\t'   ASCII: " << value << endl;
            else if (value == 13)
               cout << "\\r'   ASCII: " << value << endl;
            else
               cout << ch << "'    ASCII: " << value << endl;
            infile.get(ch);
         }
      }
   }
   return 0;
}

