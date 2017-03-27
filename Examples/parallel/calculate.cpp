void calculate(const int scores[],double percentages[],int maxscore,int count)
{
   for (int i=0; i<count; i++)
      percentages[i] = static_cast<double>(scores[i])/maxscore*100;
}
