#include <iostream>
using namespace std;

int smallFactor(int x) {
   int answer = 2;
   while (x % answer != 0) answer++;
   return answer;
}

int main() {
   int n;
   cout << "Enter a number greater than 1: " << endl;
   cin >> n;
   cout << "The factors are: ";
   while (n > 1) {
      int f = smallFactor(n);
      cout << f;
      n = n / f;
      if (n > 1) cout << " * ";
   }
   cout << endl;
   return 0;
}
    

