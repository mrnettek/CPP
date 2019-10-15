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
   c = (f - 32) * ((double) 5) / 9;
   cout << "In celsius that is: " << c << endl;
   return 0;
}

