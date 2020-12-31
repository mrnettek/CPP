#include <iostream>
using namespace std;

int main() {
   int x;
   cout << "How many cents change is needed? ";
   cin >> x;
   int q, d, n, c;  // quarters, dimes, nickles and cents wanted

   q = x / 25;
   x = x % 25;
   d = x / 10;
   x = x % 10;
   n = x / 5;
   c = x % 5;

   cout << "Quarters: " << q << "\nDimes: " << d << 
             "\nNickels: " << n << "\nCents: " << c << endl;
   return 0;
}
