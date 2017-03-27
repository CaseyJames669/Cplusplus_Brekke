//Casey Bladow
//main.cpp 
//2-3-13
//
//C++ program that processes student scores, outputting results for each
//student, followed by summary information for the class as a whole.

#include <iostream>
#include <iomanip>
using namespace std;

//-999 will be used to stop break the while loop
const int sentinel = -999;

int main()
{
  cout << fixed << setprecision(2);
  double maximum; 
  double score;
  double pct;
  double count = 0;
  double high = 0;
  double low = 9999;
  double avgScore;
  double avgPct;
  double numAplus = 0;
  double numA = 0;
  double numAminus = 0;
  double numBplus = 0;
  double numB = 0;
  double numBminus = 0;
  double numCplus = 0;
  double numC = 0;
  double numCminus = 0;
  double numDplus = 0;
  double numD = 0;
  double numDminus = 0;
  double numF = 0;
  double totalScore = 0;
  double totalPCT = 0;
  const char* grade;  
  
  //enter the max points possible for class
  cout << "Enter the Maximum score: ";
  cin >> maximum;
  
  while (score != sentinel)
  {
    //enter each students total score
    cout << "Enter the Student Score: ";
    cin >> score;
    
    //when the user inputs -999 while loop will break and the
    //summary will print
    if (score==-999)
      break;
    
    //count = number of student scores entered
    count += 1;
    
    //convert the score to a percentage value
    pct = score / maximum * 100;
    
    //find the corresponding grade value based off percentage value
    if (pct >= 97 && pct <= 100)
    {
      grade = "A+";
      numAplus += 1;
    }
    else if (pct >= 90 && pct <= 96)
    {
      grade = "A";
      numA += 1;
    }
    else if (pct == 89)
    {
      grade = "A-";
      numAminus += 1;
    }
    else if (pct >= 87 && pct <= 88)
    {
      grade = "B+";
      numBplus += 1;
    }
    else if (pct >= 80 && pct <= 86)
    {
      grade = "B";
      numB += 1;
    }
    else if (pct == 79)
    {
      grade = "B-";
      numBminus += 1;
    }
    else if (pct >= 77 && pct <= 78)
    {
      grade = "C+";
      numCplus += 1;
    }
    else if (pct >= 70 && pct <= 76)
    {
      grade = "C";
      numC += 1;
    }
    else if (pct == 69)
    {
      grade = "C-";
      numCminus += 1;
    }
    else if (pct >= 67 && pct <= 68)
    {
      grade = "D+";
      numDplus += 1;
    }
    else if (pct >= 60 && pct <= 66)
    {
      grade = "D";
      numD += 1;
    }
    else if (pct == 59)
    {
      grade = "D-";
      numDminus += 1;
    }
    else
    {
      grade = "F";
      numF += 1;
    }
    
    //adding up the scores for a grand total
    totalScore += score;

    //adding up the percentages for a grand total
    totalPCT += pct;
    
    //prints individual score results
    cout << score << " " << pct << "% " << grade << endl;
    
    high = score>high? score:high; //condtional operator to find high scores
    low = score<low? score:low; //conditional operator to find low score
  }
  
  //finding the average score
  //taking the total of the scores entered
  //and divided by the number of students
  avgScore = totalScore/count;
  
  //finding the average pct
  //taking the total percentages of the scores entered
  //and divided by the number of students
  avgPct = totalPCT/count;
  
  //Summary: prints max score, number of students, high/low scores,
  //average score/percentage, and number of each grade value
  cout << "Summary: " << endl;
  cout << "Maximum Score: " << maximum << endl;
  cout << "Number of Students: " << count << endl;
  cout << "High Score: " << high << endl;
  cout << "Low Score: " << low << endl;
  cout << "Average Score: " << avgScore << endl;
  cout << "Average Percentage: " << avgPct << "%" << endl;
  cout << "Number of A+'s: " << numAplus << endl;
  cout << "Number of A's: " << numA << endl;
  cout << "Number of A-'s: " << numAminus << endl;
  cout << "Number of B+'s: " << numBplus << endl;
  cout << "Number of B's: " << numB << endl;
  cout << "Number of B-'s: " << numBminus << endl;
  cout << "Number of C+'s: " << numCplus << endl;
  cout << "Number of C's: " << numC << endl;
  cout << "Number of C-'s: " << numCminus << endl;
  cout << "Number of D+'s: " << numDplus << endl;
  cout << "Number of D's: " << numD << endl;
  cout << "Number of D-'s: " << numDminus << endl;
  cout << "Number of F's: " << numF << endl;
  
  return 0;
}