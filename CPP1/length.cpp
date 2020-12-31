#include <iostream>
#include <cstring>
using namespace std;

int main() {
   string s = "hello";
   char x[] = "hello";
   cout << s.length() << " " << strlen(x) << endl;
   return 0;
} 
