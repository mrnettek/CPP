// reverse digits of a number
#include <iostream>
using namespace std;

void reverse(int x) {
   if (x < 10) cout << x;
   else {
      cout << x % 10;
      reverse(x/10);
   }
}

int main() {
   int n;
   cout << "Enter a number greater than 0: ";
   cin >> n;
   reverse(n);
   cout << endl;
   return 0;
}
