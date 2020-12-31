#include <iostream> 
using namespace std;

int triangle(int n) {
   int answer = 0;
   for (int c = 1; c <= n; c++)
      answer += c;
   return answer;
}

int main() {
   for (int c = 1; c <= 10; c++)
      cout << triangle(c) << endl;
   return 0;
}
