#include <iostream>
using namespace std;

int main() {
   int data[11] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
   char pic[10][11];

   for (int r = 0; r <= 9; r++)
      for (int c = 0; c <= 10; c++)
         pic[r][c] = ' ';

   for (int c = 0; c <= 10; c++) {
      for (int r = 0; r < data[c]; r++) 
         pic[r][c] = 'X';
   }

   cout << endl << endl;

   for (int r = 9; r >= 0; r--) {
     for (int c = 0; c <= 10; c++) cout << pic[r][c];
     cout << endl;
   }

   cout << endl;
   return 0;
}  
