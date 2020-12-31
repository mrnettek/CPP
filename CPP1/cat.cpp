#include <iostream>
#include <cstring>
using namespace std;

int main() {
   string t, s = "hello";
   char y[11], x[] = "hello";
   t = s + s;
   strcpy(y, x);
   strcat(y, x);
   cout << t << "   " << y << endl;
   return 0;
} 
