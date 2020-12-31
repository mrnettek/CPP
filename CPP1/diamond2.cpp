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

void row(int r, int size) {
   spaces(size - r);
   if (r > 1) {
     stars (2);
     spaces (2*(r - 2));
   }
   stars (1);
   cout << endl;
}

int main() {
   int r, size;
   cout << "Size of diamond? ";
   cin >> size;

   for (r = 1; r <= size; r ++) row(r, size);
   for (r = size - 1; r >= 1; r --) row (r, size);

   return 0; 
}
    

