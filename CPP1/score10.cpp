#include <iostream>
using namespace std;

int main() {
   int scores[11];
   int i, total = 0;
   double average;

   for (i = 1; i <= 10; i++) {
      cout << "Enter the score for student " << i << ":";
      cin >> scores[i];
   }

   for (i = 1; i <= 10; i++)
      total = total + scores[i];
   average = total / 10.0;

   cout << "The below average scores were: ";
   for (i = 1; i <= 10; i++) {
       if (scores[i] < average)
          cout << scores[i] << " ";
   }
   cout << endl;
   
   return 0;
}
