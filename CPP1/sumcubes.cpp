// print sums of cubes
#include <iostream>
using namespace std;

int main() {
   int limit;
   cout << "Enter the number of rows to be seen:  ";
   cin >> limit;

   for (int r = 1; r <= limit; r++) {
      int total = 0;
      for (int term = 1; term <= r; term++) {
         cout << "cube " << term;
         if (term < r) cout << " + ";
         else cout << " = ";
         total = total + term * term * term;
      }
      cout << total << endl;
   }

   return 0;
}
