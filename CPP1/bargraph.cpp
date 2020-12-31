#include <iostream>
using namespace std;

int main() {
   int count[6] = {7, 2, 4, 1, 0, 4};

   int max = count[0];
   for (int c = 0; c <= 5; c++) {
      if (count[c] > max) max = count[c];
   }

   for (int row = max; row >= 1; row --) {
     for (int c = 0; c <= 5; c++) {
        if (count[c] >= row) cout << " *";
        else                 cout << "  ";
     }
     cout << endl;
   }

   for (int c = 0; c <= 5; c++) cout << "--";
   cout << endl;
   for (int c = 0; c <= 5; c++) cout << " " << c;
   cout << endl;

   return 0;
}  
