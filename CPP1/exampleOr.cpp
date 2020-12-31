#include <iostream>
using namespace std;

int main() {
   int age;
   cout << "How old are you: ";
   cin >> age;

   while ((age <= 0) || (age >= 100)) {
     cout << "That seems unlikely." << endl;
     cout << "How old are you really? ";
     cin >> age;
   }
   
   cout << "Thank you." << endl;
   return 0;
}
