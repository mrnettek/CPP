#include <iostream>
using namespace std;

int main() {
   int cols;
   cout << "How many columns? ";
   cin >> cols;
   int rows = cols + (cols - 1);

   for (int r = 1; r <= rows ; r++) {
     for (int c = 1; c <= cols; c++) {
        if (c == r || c + r == rows + 1) cout << "*";
        else cout << " ";
     }
     cout << endl;
   }

   return 0;
}
