#include <iostream>
using namespace std;

int minArray(int y[][5], int rowCap, int colCap) {
   int min = y[0][0];
   for (int r = 0; r < rowCap; r++)
     for (int c = 0; c < colCap; c++)
       if (y[r][c] < min) min = y[r][c];
   return min;
}

int main() {
   int x[3][5] = {{3,4,5,2,3}, {2,3,4,5,1}, {6,5,4,3,2}};
   cout << minArray(x, 3, 5) << endl;
   return 0;
}
