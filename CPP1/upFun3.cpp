#include <iostream>
using namespace std;

void toUp(string &x) {
  for (int i = 0; i < x.length(); i++)
     if (x[i] > 96) x[i] = (char) (x[i] - 32);
}

int main() {
   string x = "Hello";
   toUp(x);
   cout << x << endl;
   return 0;
}
