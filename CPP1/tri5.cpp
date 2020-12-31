#include <iostream>
using namespace std;

void addStar(string &stars) {
   stars = "*" + stars;
}

int main() {
   string stars = "";
   for (int c = 1; c <= 10; c++) {
      addStar(stars);
      cout << stars << endl;
   }
   return 0;
}
   
