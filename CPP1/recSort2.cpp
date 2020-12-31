#include <iostream>
using namespace std;

// place item into a partially sorted array
void insert(int x[], int start, int stop, int item) {
   while (stop >= start && x[stop] > item) {
      x[stop + 1] = x[stop];
      stop --;
   }
   x[stop + 1] = item;
}

void sort(int x[], int from, int to) {
  if (from == to) return;
  sort(x, from, to - 1);
  insert(x, from, to - 1, x[to]);
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
   sort(x, 0, 9);  // sort the part of x[] from index 0 to index 9
   cout << "  Sorted array:\n";
   printArray(x, 10);
   return 0;
}  
