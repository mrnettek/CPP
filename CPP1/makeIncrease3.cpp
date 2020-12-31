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
   int x, y, z;
   cout << " Enter three integers: ";
   cin >> x >> y >> z;
   order(x, y);
   order(y, z);
   order(x, y);
   cout << "The smallest number was: " << x << endl;
   cout << "The largest number was: " << z << endl;
   return 0; 
}
    

