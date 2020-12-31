#include <iostream>
using namespace std;

int main() {
   int number;
   int numDigits = 0;
   int digits[30];

   cout << "Enter a positive number: ";
   cin >> number;

   while (number > 0) {
      digits[numDigits] = number % 10;
      numDigits++;
      number = number / 10;
   }

   for (int i = numDigits - 1; i >= 0; i--)
      cout << (char) ('A' + digits[i]);
   cout << endl;
   return 0;
}
