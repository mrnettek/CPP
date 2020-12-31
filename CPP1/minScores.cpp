#include <iostream>
using namespace std;

int main() {
   int score[10][30];
   string name[30];
   int r, c;
   int min_score[10];
   int numStudents, numScores;

// How many students?  How many scores?
   cout << "Enter the number of students and number of scores: ";
   cin >> numStudents >> numScores;
   if (numStudents <= 0 || numScores <= 0) {
      cout << "No data to process" << endl;
      exit(1);
   }
   if (numStudents > 30 || numScores > 10) {
      cout << "You need a larger version of the program.";
      exit(1);
   }


// Enter data
   cout << "Enter " << numStudents << " student names (1 name each): " << endl;
   for (c = 0; c < numStudents; c++) cin >> name[c];
   cout << "For each of " << numScores << " quizzes, enter " << numStudents << " scores: " << endl;
   for (r = 0; r < numScores; r++) 
     for (c = 0; c < numStudents; c++) cin >> score[r][c];

// Find min_scores
   for (r = 0; r < numScores; r++) {
      min_score[r] = score[r][0];
      for (c = 0; c <= numStudents; c++)
         if (score[r][c] < min_score[r]) 
            min_score[r] = score[r][c];
   }

// Print all low scoring students
   cout << "Low scoring students in each quiz." << endl;
   for (r = 0; r < numScores; r++) {
      cout << "Quiz " << r << " : ";
      for (c = 0; c < numStudents; c++)
         if (score[r][c] == min_score[r]) cout << name[c] << " ";
      cout << endl;
   }

   return 0;
}
