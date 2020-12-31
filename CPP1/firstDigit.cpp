// first digit
#include <iostream>
using namespace std;

int firstDigit(int x) {
   if (x < 10) return x;
   return firstDigit(x/10);
}

int main() {
   int n;
   cout << "Enter a number greater than 0: ";
   cin >> n;
   cout << "The first digit is " << firstDigit(n) << endl;
   return 0;
}
