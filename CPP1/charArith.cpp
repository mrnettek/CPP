#include <iostream>
using namespace std;

int main() {
   char x = 'A';
   x++;
   cout << x << (char) (x + 32) << endl;
   return 0;
} 
