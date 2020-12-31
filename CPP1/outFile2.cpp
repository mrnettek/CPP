#include <fstream>
#include <iostream>
using namespace std;

int main() {
   ofstream f;
   f.open("output.txt");
   ofstream f2("C:\\out.txt");

   if (f == 0) cout << "Failed to open output.txt" << endl;
   else f << "Hello\n";
   if (f2 == 0) cout << "Failed to open C:\\out.txt" << endl;
   else f2 << "Hello\n";
   f.close();
   f2.close();
   return 0;
}
