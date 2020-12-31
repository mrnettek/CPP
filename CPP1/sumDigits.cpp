// sum of digits of a number
#include <iostream>
using namespace std;

int sum(int x) {
   if (x < 10) return x;
   return x % 10 + sum(x / 10);
}

int main() {
   int n;
   cout << "Enter a number greater than 0: ";
   cin >> n;
   cout << "The digit sum is " << sum(n) << endl;
   return 0;
}
