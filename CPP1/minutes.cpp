//   decides whether input is valid
#include <iostream>
using namespace std;

int main(){
   int age, minutes; 
   cout << "What is your age: ";
   cin >> age; 

   if (age > 99) cout << "Very funny." << endl;

   minutes = age * 365 * 24 * 60;
   cout << "You are " << minutes << " minutes old." << endl;
   return 0;
}

