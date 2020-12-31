#include <iostream>
using namespace std;

int main() {
   int scores[5] = {4, 5, 3, 10, 9};
   string names[5] = {"Max", "Arthur", "Freddy", "Kelly", "Jack"};
   for (int i = 0; i <= 4; i++) 
      cout << names[i] << " got a score of " << scores[i] << endl;
   return 0;
} 
