// first example of a 2 dimensional array
#include <iostream>
using namespace std;

int main() {
   int score[4][3];
   int r, c;
   int total[3];

// Enter data
   cout << "For each of 4 quizzes, enter 3 student scores: " << endl;
   for (r = 0; r < 4; r++) 
     for (c = 0; c < 3; c++) cin >> score[r][c];

// Find totals for each student by adding each score to one of the student totals
   for (c = 0; c < 3; c++) total[c] = 0;
   for (r = 0; r < 4; r++) {
      for (c = 0; c < 3; c++) total[c] += score[r][c];
   }

// use totals to print all averages
   for (c = 0; c < 3; c++) 
      cout << "The average for student #" << c << " is: " 
           << total[c] / 4.0 << endl;

   return 0;
}
