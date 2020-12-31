//    Enter even, with 3 strikes rule
#include <iostream>
using namespace std;

int main(){
   int number; 
   int strikes = 0;
   cout << "Give me an even number: ";
   cin >> number;
   while (number % 2 != 0) {
      strikes++;
      if (strikes >= 3) {
         cout << "Go away and learn what even means. Goodbye." << endl; 
         exit(1);
      }
      cout << "\nTry again: ";
      cin >> number;
   }
   cout << "Thank you " << endl;
   return 0;
}

