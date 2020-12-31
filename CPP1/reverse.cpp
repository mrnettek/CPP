// reverse digits of a number
#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter a number greater than 0: ";
   cin >> n;
   if (n <= 0) {
      cout << "Illegal." << endl;
      exit(1);
   }

   while (n > 0) {
       cout << n % 10;
       n = n / 10;
   }
   cout << endl;

   return 0;
}
