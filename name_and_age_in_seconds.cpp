// MrNetTek
// eddiejackson.net/blog
// 10/14/2019
// free for public use 
// free to claim as your own

// name and age in seconds

#include <iostream>
using namespace std;

int main(){

   int age; 
   string name;
   cout << "Who are you: " ;
   cin >> name;
   cout << "What is your age: ";
   cin >> age; 
   
   int answer;
   answer = age * 365 * 24 * 60 * 60;

   cout << "Hello " << name << ". You are more than "  
        << answer << " seconds old." << endl;
   return 0;
}

