#include <iostream>
using namespace std;

void triangle(int x) {
   if (x <= 0) return;
   triangle(x - 1);
   for (int i = 1; i <= x; i++) cout << "*";
   cout << endl;
}

int main() {
   triangle(7);
   return 0;
}
