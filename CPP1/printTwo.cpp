#include <iostream>
using namespace std;

// a function with an array parameter
void printTwo(int y[]) {
   cout << y[0] << " " << y[1] << endl;
}

int main() {
   int x[5] = {3,4,5,6,7};
   printTwo(x);
   return 0;
}
