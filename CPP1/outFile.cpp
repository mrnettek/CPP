#include <fstream>
using namespace std;

int main() {
   ofstream f;
   f.open("output.txt");
   f << "Hello" << endl;
   f.close();
   return 0;
}
