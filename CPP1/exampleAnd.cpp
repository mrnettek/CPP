#include <iostream>
using namespace std;

int main() {
   int age;
   cout << "How old are you: ";
   cin >> age;

   if ((age > 0) && (age < 100)) 
      cout << "Thank you." << endl;
   else
      cout << "Are you serious?" << endl;

   return 0;
}
