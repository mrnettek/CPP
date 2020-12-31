// reverse digits of a number and store the result
#include <iostream>
using namespace std;

int main() {
   int n;
   int answer = 0;
   cout << "Enter a number greater than 0: ";
   cin >> n;
   if (n <= 0) {
      cout << "Illegal." << endl;
      exit(1);
   }

   while (n > 0) {
       answer = answer * 10 + n % 10;
       n = n / 10;
   }
   cout << answer << endl;

   return 0;
}
