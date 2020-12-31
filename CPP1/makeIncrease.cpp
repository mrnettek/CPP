#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void order(int &a, int &b) {
   if (a > b) swap(a, b);
}

int main() {
   int x, y;
   cout << " Enter two integers: ";
   cin >> x >> y;
   order(x, y);
   cout << "The smaller number was: " << x << endl;
   cout << "The larger number was: " << y << endl;
   return 0; 
}
    

