#include <iostream>
using namespace std;

int gcd(int x, int y) {
   if (y == 0) return x;
   return gcd(y, x % y);
}

int main() {
   int n, m;
   cout << "Enter two integers: ";
   cin >> n >> m;
   cout << "The gcd is " << gcd(n, m) << endl;
   return 0;
}
