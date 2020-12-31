#include <iostream>
using namespace std;

int main() {
   int number;
   cout << "Enter a positive number: ";
   cin >> number;

   while (!(number > 0)) {
     cout << "Not positive." << endl;
     cout << "Try again: ";
     cin >> number;
   }
   
   cout << "Thank you." << endl;
   return 0;
}
