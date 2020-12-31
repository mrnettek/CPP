#include <iostream>
using namespace std;

void swap(int array[], int i, int j) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

int maxIndex(int array[], int high) {
  int answer = 0;
  for (int c = 0; c <= high; c++)
    if (array[c] > array[answer]) answer = c;
  return answer;
}

void sort(int x[], int capacity) {
  for (int entry = capacity - 1; entry >= 0; entry--) {
    int index = maxIndex(x, entry);
    swap(x, entry, index);
  }
}

void printArray(int y[], int capacity) {
  for (int c = 0; c <= (capacity - 1); c++)
    cout << y[c] << " ";
}

int main() {
   int x[10] = {7, 90, 2, 45, 4, 1, 60, 34, 90, 10};
   int y[5] = {2, 4, 4, 1, 60};
   cout << "Unsorted x and y:\n";
   printArray(x, 10);
   cout << endl;
   printArray(y, 5);
   cout << endl;
   sort(x, 10);
   sort(y, 5);
   cout << "  Sorted x and y:\n";
   printArray(x, 10);
   cout << endl;
   printArray(y, 5);
   cout << endl;
   return 0;
}  
