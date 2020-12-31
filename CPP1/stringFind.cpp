#include <iostream>
#include <cstring>
using namespace std;

int main() {
   string s = "hello";
   char x[] = "hello";
   cout << (int) s.find("lo") << endl;
   cout << strstr(x,"l") << endl;
   cout << (strstr(x,"lo") - x) << endl;
   return 0;
} 
