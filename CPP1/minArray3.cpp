#include <iostream>
using namespace std;

int minimum(int x[], int n) {
   if (n <= 1) return x[0];
   int ans = minimum(x, n - 1);
   if (x[n - 1] < ans) return x[n - 1];
   return ans;
}

void printArray(int y[], int n) {
  if (n == 0) return;
  printArray(y, n - 1);
  cout << y[n - 1] << " ";
}

int main() {
   int x[11] = {67, 90, 32, 45, 4, 11, 60, 34, 99, 10, 17};
   cout << "Array data:\n";
   printArray(x, 11);
   cout << endl;
   cout << " The minimum is: " << minimum(x, 11) <<endl;
   return 0;
}  
