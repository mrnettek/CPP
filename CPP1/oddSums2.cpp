// print sums of odd numbers
#include <iostream>
using namespace std;

int main() {

   int i, n;

   for (n = 1; n <= 10; n++) {

      int odd = 1;
      for (int i = 1; i < n; i++) {
         cout << odd << " + ";
         odd = odd + 2;
      }
      cout << odd << " = ";

      int sum = 0;
      odd = 1;

      for (int i = 1; i <= n; i++) {
         sum = sum + odd;
         odd = odd + 2;
      }
      cout << sum << endl;
    }

   return 0;
}
