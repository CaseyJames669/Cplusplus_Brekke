#include <iostream>
using namespace std;
#include "constants.h"

void readStudents(string names[],int scores[],int& count,int& maxscore);
void calculate(const int scores[], double percentages[], 
                   int maxscore, int count);
void writeStudents(const string names[], const int scores[], 
                   const double percentages[],int count,int maxscore);

int main()
{
   string names[ARRAYMAX];
   int scores[ARRAYMAX];
   double percentages[ARRAYMAX];
   int count;
   int maxscore;

   readStudents(names,scores,count,maxscore);
   calculate(scores,percentages,maxscore,count);
   writeStudents(names,scores,percentages,count,maxscore);

   cout << "input read from file: scores\n";
   cout << "output written to file: results\n";
   return 0;
}
