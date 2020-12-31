//  Prime number testing.

#include <iostream>
using namespace std;

int main(){
   cout << "Enter an integer number greater than 1: ";
   int number;
   cin >>number;
   if (number <= 1) exit(1);

   int tryFactor = 2;
   while (tryFactor < number) {
      if (number % tryFactor == 0) {
         cout << "Your number is not prime.  It has a factor: " 
              << tryFactor << endl;
         return 0;
      }
      tryFactor++;
   }
   cout << "Your number is prime." << endl;
   return 0;
}

