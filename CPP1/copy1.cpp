#include <iostream>
#include <fstream>
using namespace std;

int main() {
   string iName, oName;
   cout << "Enter input filename and outputfile name: ";
   cin >> iName >> oName;
   ifstream fin;
   ofstream fout;
   fin.open(iName.c_str());
   fout.open(oName.c_str());
   if (fin == 0 || fout == 0) {
     cerr << "Sorry the file open failed." << endl;
     return 0;
   }
   while (!fin.eof()) {
     char x = fin.get();
     fout << x;
   }
   fin.close();
   fout.close();
}
