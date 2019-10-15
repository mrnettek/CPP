// MrNetTek
// eddiejackson.net/blog
// 10/14/2019
// free for public use 
// free to claim as your own

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

