#include <iostream>
using namespace std;

void swap(int array[], int i, int j) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

void reverse(int x[], int from, int to) {
   if (from >= to) return;
   swap(x, from, to);
   reverse(x, from + 1, to - 1);
}

void printArray(int y[], int n) {
  if (n == 0) return;
  printArray(y, n - 1);
  cout << y[n - 1] << " ";
}

int main() {
   int x[11] = {7, 90, 2, 45, 4, 1, 60, 34, 99, 10, 17};
   cout << "Original array:\n";
   printArray(x, 11);
   cout << endl;
   reverse(x, 0, 10);
   cout << "  Reversed array:\n";
   printArray(x, 11);
   cout << endl;
   return 0;
}  
