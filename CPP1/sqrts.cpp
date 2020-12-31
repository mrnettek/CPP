//    square roots
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   cout << "Table of square roots." << endl;
   int number = 1;
   while (number < 100) {
      if (number < 10) cout << " ";
      cout << number << "  " << sqrt(number) << endl;
      number++;
   }
   return 0;
}

