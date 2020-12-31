#include <iostream>
using namespace std;

void spaces(int x) {
   for (int c = 1; c <= x; c++)
      cout << " ";
}

void stars(int x) {
   for (int c = 1; c <= x; c++)
      cout << "*";
}

int main() {
   int rows;
   cout << "How many rows? ";
   cin >> rows;

   for (int star = 1; star <= rows; star ++) {
      spaces (rows - star);
      stars (star);
      cout << endl;
   }
    
}
    

