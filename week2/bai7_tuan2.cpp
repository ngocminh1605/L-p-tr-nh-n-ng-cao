# include <iostream>
# include <math.h>
# include <iomanip>
using namespace std ;

int main () {
    int x,i;
    double oldsum;
    cin >> x;
    i = 1;
     double num = x ; int dem = i;
     double sum = 1 ; oldsum = 0;
    while (sum - oldsum > 0.001) {
        oldsum = sum;
        sum = sum + num/dem;
        i++;
        num = num*x;
        dem = dem*i;
    };
    cout << fixed << setprecision (4) << sum;
}
