#include <iostream>
#include <cstring>
using namespace std;

int main() {
   string s = "NY";
   string t = "ew ";
   s.insert(1, t);
   s.insert(s.size(),"ork");
   cout << s << endl;
   return 0;
} 
