// factors of a number
#include <iostream>
using namespace std;

void factors(int x) {
   if (x <= 1) return;
// first find the smallest factor p
   int p = 2;
   while (x % p != 0) p++;
// print out p
   cout << p << " ";
// process and print factors for whatever is left after p
   factors(x/p);
}

int main() {
   int n;
   cout << "Enter a number greater than 0: ";
   cin >> n;
   cout << "Factors are: ";
   factors(n);
   cout << endl;
   return 0;
}
