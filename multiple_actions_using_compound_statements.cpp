// MrNetTek
// eddiejackson.net/blog
// 10/14/2019
// free for public use 
// free to claim as your own

//  decides whether input is valid
#include <iostream>
using namespace std;

int main(){
   int age; 
   cout << "What is your age: ";
   cin >> age; 

   if (age < 0) {
       cout << "Idiot." << endl;
       exit(1);
   }
   else cout << "You passed." << endl;
   return 0;
}

