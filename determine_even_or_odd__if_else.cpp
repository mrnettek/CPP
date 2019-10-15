// MrNetTek
// eddiejackson.net/blog
// 10/14/2019
// free for public use 
// free to claim as your own

// decides even or odd
#include <iostream>
using namespace std;

int main(){
   int number; 
   cout << "Give me a number:";
   cin >> number;
   if (number % 2 == 0)
      cout << "That is even";
   else
      cout << "That is odd";
   cout << endl;
   return 0;
}

