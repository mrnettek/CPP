// print a table of sums of odd numbers
#include <iostream>
using namespace std;

int main() {

   for (int n = 1; n <= 100; n++) {
      cout << "The sum of the first " << n << " odd numbers is: ";

      int sum = 0;
      int odd = 1;

      for (int i = 1; i <= n; i++) {
         sum = sum + odd;
         odd = odd + 2;
      }
      cout << sum << endl;
    }

   return 0;
}
