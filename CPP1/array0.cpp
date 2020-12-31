#include <iostream>
using namespace std;

int main() {
   int scores[5] = {4, 5, 3, 10, 9};
   int i, total = 0;

   for (i = 0; i <= 4; i++)
      total += scores[i];

   cout << "The scores were: ";
   for (i = 0; i <= 4; i++)
      cout << scores[i] << " ";
   cout << "The average was: " << total / 5.0 << endl;
   return 0;
} 
