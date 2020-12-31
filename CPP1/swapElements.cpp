#include <iostream>
using namespace std;

void swapElements(int y[], int i, int j) {
   int temp = y[i];
   y[i] = y[j];
   y[j] = temp;
}

void printArray(int y[], int cap) {
   for (int i = 0; i < cap; i++) cout << y[i] << " ";
   cout << endl;
}

int main() {
   int x[5] = {3,4,5,6,7};
   printArray(x, 5);
   swapElements(x, 2, 3);
   printArray(x, 5);
   return 0;
}
