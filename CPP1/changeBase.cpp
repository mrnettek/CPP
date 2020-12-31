#include <iostream>
using namespace std;

int main() {
   int number, base, i, length = 0;
   int digits[100];

   cout << "Enter a positive number: ";
   cin >> number;
   cout << "Enter a new base, between 2 and 9: ";
   cin >> base;

   while (number > 0) {
     digits[length] = number % base;
     length = length + 1;
     number = number / base;
   }

   cout << "The conversion to the new base is: ";
   for (i = length - 1; i >= 0; i--) cout << digits[i];
   cout << endl;
   return 0;
}
