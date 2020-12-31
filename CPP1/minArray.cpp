#include <iostream>
using namespace std;

int minArray(int y[], int cap) {
   int min = y[0];
   for (int c = 1; c < cap; c++)
      if (y[c] < min) min = y[c];
   return min;
}

int main() {
   int x[5] = {3,4,5,2,3};
   cout << minArray(x, 5) << endl;
   return 0;
}
