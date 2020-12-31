#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

  srand(time(0));   // to get new random numbers for each run 

  int dice;
  cout << "Ten random dice rolls: ";
  for (int c = 1; c <= 10; c++) {
     dice = rand() % 6 + 1;
     cout << dice << " ";
  }
  cout << endl;

  return 0;

}
    

