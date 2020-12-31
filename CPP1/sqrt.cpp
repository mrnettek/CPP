#include <iostream>
using namespace std;

bool isClose(double x, double y) {
   if (x > y + 0.0000001) return false;
   if (y > x + 0.0000001) return false;
   return true;
}

double sqrt(double x) {
   if (x <= 0) return 0;
   double guess = x / 2;
   while (!isClose(guess, x/guess)) 
      guess = (guess + x/guess)/2;
   return guess;
}

int main() {
   cout << "The square root of 10 is about: " << sqrt(10) << endl;
   return 0;
}
   
