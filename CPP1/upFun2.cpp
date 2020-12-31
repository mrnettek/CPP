#include <iostream>
using namespace std;

void toUp(string &x) {
  for (int i = 0; i < x.length(); i++)
     x[i] = toupper(x[i]);
}

int main() {
   string x = "Hello";
   toUp(x);
   cout << x << endl;
   return 0;
}
