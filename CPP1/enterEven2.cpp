//    Even number, make the user try again
#include <iostream>
using namespace std;

int main(){
   int number; 
   cout << "Give me an even number: ";
   cin >> number;
   while (number % 2 != 0) {
      cout << "\nTry again: ";
      cin >> number;
   }
   cout << "Thank you " << endl;
   return 0;
}

