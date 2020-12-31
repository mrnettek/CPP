// apply the quadratic formula

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double a, b, c;
   cout << "Enter the 3 coefficients of a quadratic: ";
   cin >> a >> b >> c; 
   if (a == 0.0) exit(1);  // not a quadratic

   double r = sqrt(b*b - 4*a*c);
   double root1 = (- b + r) / (2*a); 
   double root2 = (- b - r) / (2*a); 

   cout << "The roots are " << root1 << " and " << root2 << endl;
   return 0;
}
