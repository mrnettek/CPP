#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
   if (argc < 3) {
      cerr << "Usage:  cp file1 file2 " << endl;
      return 0;
   }
   string iName = argv[1];
   string oName = argv[2];
   ifstream fin;
   ofstream fout;
   fin.open(iName.c_str());
   fout.open(oName.c_str());
   if (fin == 0 || fout == 0) {
     cerr << "Sorry the file open failed." << endl;
     return 0;
   }
   char x = fin.get();
   while (!fin.eof()) {
     fout << x;
     x = fin.get();
   }
   fin.close();
   fout.close();
}
