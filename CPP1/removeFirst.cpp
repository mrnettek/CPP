// remove the first digit of a number
#include <iostream>
using namespace std;

int removeFirst(int x) {
  if (x < 10) return 0;
  return x%10 + 10 * removeFirst(x/10);
}

int main() {
   int n, m;
   cout << "Enter a number greater than 0: ";
   cin >> n;
   m = removeFirst(n);
   cout << m << endl;
   return 0;
}
