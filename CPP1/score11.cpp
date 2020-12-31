#include <iostream>
using namespace std;

int main() {
   int score[1000];
   string name[1000];
   int i, count, total = 0;
   double average;

   cout << "How many students are in your class? ";
   cin >> count;
   if (count <= 0 || count > 1000) {
      cout << "You need to purchase the professional version of this program."
           << endl;
      exit(1);
   }

   cout << "Enter a (single) name for each of your students." << endl;
   for (i = 0; i < count; i++) cin >> name[i];
   for (i = 0; i < count; i++) {
      cout << "Enter the score for " << name[i] << ": ";
      cin >> score[i];
   }

   for (i = 0; i < count; i++)
      total = total + score[i];
   average = total / ((double) count);

   for (i = 0; i < count; i++) {
       cout << name[i] << " was ";
       if (score[i] < average) cout << "below ";
       if (score[i] > average) cout << "above ";
       cout << "average." << endl;
   }
   
   return 0;
}
