//    powers of 2
#include <iostream>
using namespace std;

int main(){
   cout << "Powers of 2." << endl;
   int number = 0, power = 1;
   while (number <= 20) {
      cout << number << "  " << power << endl;
      number++;
      power *= 2;
   }
   return 0;
}

