#include <iostream>
using namespace std;

double avArray(int y[], int cap) {
   double total = 0;
   for (int c = 0; c < cap; c++)
      total += y[c];
   return total/cap;
}

int main() {
   int x[5] = {3,4,5,2,3};
   cout << avArray(x, 5) << endl;
   return 0;
}
