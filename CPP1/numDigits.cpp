// number of digits
#include <iostream>
using namespace std;

int numDigits(int x) {
   if (x < 10) return 1;
   return 1 + numDigits(x / 10);
}

int main() {
   int n;
   cout << "Enter a number greater than 0: ";
   cin >> n;
   cout << "The number of digits is " << numDigits(n) << endl;
   return 0;
}
