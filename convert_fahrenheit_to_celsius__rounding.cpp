// MrNetTek
// eddiejackson.net/blog
// 10/14/2019
// free for public use 
// free to claim as your own

#include <iostream>

using namespace std;

int main(){
   int f;
   double c;

   cout << "Enter a temperature in degrees fahrenheit :" ;
   cin >> f;
   c = (f - 32) * 5 / 9.0;

   int rounded = (int) (c + 0.5);

   cout << "In celsius that is: " << rounded << endl;
   return 0;
}

