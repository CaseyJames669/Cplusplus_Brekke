//Casey Bladow
//main.cpp --> prog3
//2-11-13
//
//Array processing...

#include <iostream>
#include <iomanip>
using namespace std;

const int arraysize = 10;
const int sentinel = 0;

//function to return the number of times the searched
//integer appears.
int cc(int num, int* numbers, int count)
  {
    if (!count)
      return 0;
    int c = cc(num, numbers+1, count-1);
    return numbers[0] == num? c+1: c;
  }
  
int main()
{
  cout << fixed << setprecision(2);
  int numbers[arraysize];
  int count = 0;
  int i;
  double num;
  double average;
  double sum = 0;
  double lessThanAverage = 0;
  double greaterThanAverage = 0;
  int big, small;
  int bigIndex = 0;
  int smallIndex = 0;
  int numOfEvens = 0;
  int numOfOdds = 0;
  int searchInt;
  int lIndex = 0;
  
  //user enters integers
  cout << "Enter ints, " << sentinel << " to quit: ";
  cin >> num;
  
  //checks to see if the first user entered integer is
  //negative or not. If it is, an error is thrown and
  //user is asked to enter a new integer
  if (num < 0)
  {
    cout << "ERROR - Integer CAN NOT be a negative value." << endl;
    cout << "Enter ints, " << sentinel << " to quit: ";
    cin >> num;
  }
  
  //initializes the while loop checking to make sure the user
  //integer isn't the sentinel value and making sure the count
  //is within the allowed arraysize size.
  while (num != sentinel /*&& count < arraysize*/)
  {
    
    //checks each user entered integer to make sure they are not
    //negative. If it is, an error is thrown and
    //user is asked to enter a new integer
    if (num < 0)
    {
      cout << "ERROR - Integer CAN NOT be a negative value." << endl;
      cout << "Enter ints, " << sentinel << " to quit: ";
      cin >> num;
    }
    
    else if (count > arraysize-1)
    {
      cout << "You have exceeded the max array size." << endl;
      cout << "The values you enter from now on WILL NOT be entered into the array." << endl;
      cout << "Please enter " << sentinel << " to exit." << endl;
      cin >> num;
    }
    //else the user entered integer is added to the array
    //and count gets 1 added.
    else
    {
    numbers[count++] = num;
    cin >> num;
    }
  }
  
  //outputs the user entered array
  cout << "Entered Array: ";
  for (i = 0; i < count; i++)
    cout << numbers[i] << ' ';
  cout << endl;
  
  //finds the sum and average of the array.
  //outputting the average of the array.
  for (i = 0; i < count; i++)
    sum += numbers[i];
  average = sum/count;
  cout << "Average is: " << average << endl;  
  
  //finds the number of integers that are less than
  //and greater than the average. Outputs results
  //Resetting ints back to no decimal places because
  //these values will never yield a decimal value.
  cout << fixed << setprecision(0);
  for (i = 0; i < count; i++)
    if (numbers[i] < average)
      lessThanAverage++;
    else
      greaterThanAverage++;
  cout << "Number of ints that are less than average: " << lessThanAverage << endl;
  cout << "Number of ints that are greater than average: " << greaterThanAverage << endl;
  
  //finds the smallest and largest integers in array.
  //also reporting where the integers are indexed in the array.
  //outputting the values at the end.
  big=small=numbers[0];
  for (i = 0; i < count; i++)
    if (numbers[i] > big)
    {
      big = numbers[i];
      bigIndex = i;
    }
  for (i = 0; i < count; i++)
    if (numbers[i] < small)
    {
      small = numbers[i];
      smallIndex = i;
    }

  cout << "Largest integer was " << big << ". Indexed in numbers[" << bigIndex << "]." << endl;
  cout << "Smallest integer was " << small << ". Indexed in numbers[" << smallIndex << "]." << endl;
  
  //finds the number of odd and even indexs in array.
  //outputting the values at the end.
  for (i = 0; i < count; i++)
    if (numbers[i] % 2 == 0)
      numOfEvens++;
    else
      numOfOdds++;
  cout << "Number of Even Integers: " << numOfEvens << endl;
  cout << "Number of Odd Integers: " << numOfOdds << endl;
  
  //search for an integer value
  cout << "Enter an integer to search for in the array: ";
  cin >> searchInt;
 
  int flag = 0;
  int flag2 = 0;
  
  //iterates through numbers and checks to see if value is in
  //array.
  for (i = 0; i < count; i++)
    if (numbers[i] == searchInt)
    {
      flag = 1;
      break;
    }
    
  if (flag)
  {
    cout << "The smallest index for the integer you searched for is in numbers[" << i << "]." << endl;
    
    
    //find the last index value for searched int.
    for (i = 9; i >= 0; i--)
      if (numbers[i] == searchInt)
      {
	flag2 = 1;
	break;
      }
    if (flag2)
    {
    cout << "The largest index for the integer you searched for is in numbers[" << i << "]." << endl;
    }
    
    cout << "The integer " << searchInt << " appears " << cc(searchInt, numbers, count) << " times." << endl;
  }
  else
  {
    cout << "The integer you searched for is not in the array." << endl;
  }
  
return 0;
}
