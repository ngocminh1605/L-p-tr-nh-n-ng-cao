# include <iostream>
# include <iomanip>
# include <cmath>
using namespace std;

int main () {
   double a,b,c,p,s;
   cin >> a >> b >> c;
   p = (a+b+c)/2;
   if ( a + b > c && a + c > b && b + c > a) {
       s = sqrt(p*(p-a)*(p-b)*(p-c));
       
       cout << fixed << setprecision (2) << s;
   } else {
       cout << "invalid";
   };
   return 0;
   
}
