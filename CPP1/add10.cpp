#include <iostream>
using namespace std;

void add10(int &n) {
   n = n + 10;
}

int main() {
   int quiz;
   cout << "Enter a quiz score: ";
   cin >> quiz;
   add10(quiz);
   cout << "The score is recorded as: " << quiz << endl;
   return 0;
}
   
