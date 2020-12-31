#include <iostream>
#include <cstring>
using namespace std;

int main() {
   string s = "hello";
   char x[] = "hello";
   cout << s[2] << "   " << x[2] << endl;
   for (int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
   cout << s << endl;
   return 0;
} 
