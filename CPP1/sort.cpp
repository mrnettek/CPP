#include <iostream>
using namespace std;

void swap(string array[], int i, int j) {
  string temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

int minIndex(string array[], int low, int high) {
  int answer = low;
  for (int c = low; c <= high; c++)
    if (array[c] < array[answer]) answer = c;
  return answer;
}

void sort(string x[], int capacity) {
  for (int step = 0; step <= (capacity - 1); step++) {
    int index = minIndex(x, step, capacity - 1);
    swap(x, step, index);
  }
}

void printArray(string y[], int capacity) {
  for (int c = 0; c <= (capacity - 1); c++)
    cout << y[c] << " ";
}

int main() {
   string x[5] = {"this", "is", "a", "first", "test"};
   string y[8] = {"this", "test", "is", "longer", "than", "the",
                        "first", "test"};
   cout << "Unsorted x and y:\n";
   printArray(x, 5);
   cout << endl;
   printArray(y, 8);
   cout << endl;
   sort(x, 5);
   sort(y, 8);
   cout << "  Sorted x and y:\n";
   printArray(x, 5);
   cout << endl;
   printArray(y, 8);
   cout << endl;
   return 0;
}  
