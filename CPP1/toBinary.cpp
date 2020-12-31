// convert to binary
#include <iostream>
using namespace std;

void toBinary(int x) {
   if (x <= 1) cout << x;
   else {
      toBinary(x/2);
      cout << x%2;
   }
}

int main() {
   int n;
   cout << "Enter a number greater than 0: ";
   cin >> n;
   cout << "In binary that is " ;
   toBinary(n); 
   cout << endl;
   return 0;
}
