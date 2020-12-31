#include <iostream>
using namespace std;

int square(int x) {
   int answer = x * x;
   return answer;
}

int main() {
  int n = 5;
  cout << "The square of " << n << " is " << square(n) << endl;
  return 0;
}
    

