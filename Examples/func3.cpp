#include <iostream>
using namespace std;

const int arraysize=5;
const int sentinel=0;

// if you give a size of the array in the formal parameter,
// the compiler ignores it.
int biggest(const int numbers[],int count)
{
   int big; 
   big = numbers[0]; // precondition, array has at least 1 value
   for (int i=1; i<count; i++)
      if (numbers[i] > big)
         big = numbers[i];
   return big;
}

int findsum(const int numbers[],int count)
{
   int sum=0;
   for (int i=0; i<count; i++)
      sum += numbers[i];
   return sum;
}

double findavg(const int numbers[],int count)
{
   return static_cast<double>(findsum(numbers,count))/count;
}

void read(int numbers[], int& count)
{
   int num;
   count=0;
   cout << "enter ints, " << sentinel << " to quit: ";
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      numbers[count++] = num;
      cin >> num;
   }
}

void output(const int numbers[], int count)
{
   for (int i=0; i<count; i++)
      cout << numbers[i] << ' ';
   cout << endl;
}

// main is for declaring variables and calling functions
int main()
{
   int numbers[arraysize];
   int count;
   read(numbers,count);
   output(numbers,count);
   cout << "sum is " << findsum(numbers,count) << endl;
   cout << "average is " << findavg(numbers,count) << endl;
   cout << "the biggest is " 
        << biggest(numbers,count) << endl;
   return 0;
}
