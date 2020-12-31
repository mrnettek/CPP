#include <iostream>
using namespace std;

int main() {
   int row, col, size;

   cout << "Enter an odd number as the size of the cross: ";
   cin >> size;
   if (size < 0 || size %2 == 0) {
      cout << "Illegal size specification. " << endl;
      exit(0);
   }

   for (row = 1; row <= size; row++) {
      for (col = 1; col <= size; col++) {
         if (col == row || col == (size + 1 - row)) cout << "*";
         else cout << " ";
      }
      cout << endl;
   }
   return 0;
}
