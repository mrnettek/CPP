// first example of a 2 dimensional array
#include <iostream>
using namespace std;

int main() {
   char picture[11][11];
   int r, c;

   // make the picture blank
   for (r = 0; r <= 10; r++)
    for (c = 0; c <= 10; c++) picture[r][c] = ' ';

   int mid = 5;
   // upper and lower triangles
   for (r = 0; r <= mid; r++)  
     for (c = mid -r; c <= mid + r; c++) {
        picture[r][c] = '*';      // upper triangle
        picture[10 -r][c] = '*';  // symmetrical lower triangle
     }

   // remove middle square
   for (r = 3; r <= 7; r++)
    for (c = 3; c <= 7; c++) picture[r][c] = ' ';

   // print
   for (r = 0; r <= 10; r++) {
      for (c = 0; c <= 10; c++) 
        cout << picture[r][c];
      cout << endl;
   }

   return 0;
}
