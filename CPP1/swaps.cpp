#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
   int x = 4, y = 6;
   cout << " Before swapping x is " << x << " and y is " << y << endl;
   swap(x, y);
   cout << "  After swapping x is " << x << " and y is " << y << endl;
   return 0; 
}
    

