//   decides even or odd
#include <iostream>
using namespace std;

int main(){
   int number; 
   cout << "Give me a number:";
   cin >> number;
   if (number % 2 == 0) cout << "That is even";
   if (number % 2 != 0) cout << "That is odd";
   cout << endl;
   return 0;
}

