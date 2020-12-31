//   Even number, give user a second chance
#include <iostream>
using namespace std;

int main(){
   int number; 
   cout << "Give me an even number: ";
   cin >> number;
   if (number % 2 != 0) {
      cout << "\nTry again: ";
      cin >> number;
   }
   cout << "Thank you " << endl;
   return 0;
}

