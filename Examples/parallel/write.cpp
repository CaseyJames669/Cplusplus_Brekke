#include <fstream>
#include <iomanip>
using namespace std;

void writeStudents(const string names[],const int scores[],
                   const double percentages[],int count,int maxscore)
{
   ofstream outfile;
   outfile.open("results");
   outfile << fixed << showpoint << setprecision(2);
   outfile << "MAXIMUM TEST SCORE: " << maxscore << endl << endl;
   outfile << left << setw(20) << "Name";
   outfile << right << setw(5) << "Score";
   outfile << right << setw(8) << "PCT" << endl;
   outfile << left << setw(20) << "------------------";
   outfile << right << setw(5) << "-----";
   outfile << right << setw(8) << "------" << endl;
   for (int i=0; i<count; i++)
   {
      outfile << left << setw(20) << names[i];
      outfile << right << setw(5) << scores[i];
      outfile << right << setw(8) << percentages[i] << endl;  
   }
   outfile.close();
}
