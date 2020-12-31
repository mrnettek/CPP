#include <iostream>
#include <cstring>
using namespace std;

int main() {
   string s;
   char t[100];
   cout << "Enter your full name: ";
   getline(cin, s);
   int x = s.find("Freddy");
   if (x >= 0)
      cout << "Sorry I can't talk to you. " << endl;
   else cout << "Hello " << s << endl;
   cout << "Enter your full name again: ";
   cin.getline(t, 99);
   if (strstr(t, "Freddy") != 0)
      cout << "Sorry I can't talk to you." << endl;
   else cout << "Hello " << t << endl;
   return 0;
} 
