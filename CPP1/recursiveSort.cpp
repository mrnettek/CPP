#include <iostream>
using namespace std;

// place item into a partially sorted array
void insert(int x[], int sorted, int item) {
   if (sorted == 0 || item >= x[sorted - 1]) x[sorted] = item;
   else {
      x[sorted] = x[sorted - 1];
      insert(x, sorted - 1, item);
   }
}

void sort(int x[], int n) {
  if (n == 1) return;
  sort(x, n - 1);
  insert(x, n - 1, x[n - 1]);
}

void printArray(int y[], int capacity) {
  for (int c = 0; c <= (capacity - 1); c++)
    cout << y[c] << " ";
  cout << endl;
}

int main() {
   int x[10] = {7, 90, 2, 45, 4, 1, 60, 34, 99, 10};
   cout << "Unsorted array:\n";
   printArray(x, 10);
   sort(x, 10);
   cout << "  Sorted array:\n";
   printArray(x, 10);
   return 0;
}  
