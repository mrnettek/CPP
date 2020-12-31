// print the sum of 10 odd numbers
#include <iostream>
using namespace std;

int main() {
   int sum = 0;
   int odd = 1;

   for (int i = 1; i <= 10; i++) {
      sum = sum + odd;
      odd = odd + 2;
   }
   cout << sum << endl;

   return 0;
}
