#include <iostream>
using namespace std;

int main() {
   int number, i, length = 0;
   int digits[100];

   cout << "Enter a positive number: ";
   cin >> number;

   while (number > 0) {
     digits[length] = number % 10;
     length = length + 1;
     number = number / 10;
   }

   cout << "Which digit do you want to see: give a number between "
        << 1 << " and " << length <<": ";
   cin >> i;
   cout << "That digit is " << digits[length - i] << endl;
   return 0;
}
