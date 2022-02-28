# include <iostream>
# include <iomanip>
using namespace std;

int main () {
    int i;
    double n,tb;
    double a[1000];
    cin >> n;
    tb = 0;
    for ( i = 0 ; i < n ; i++) {
        cin >> a[i];
        tb +=a[i];
    };
    tb = tb/n;
    double s;
    for (i = 0 ; i < n ; i++) {
        s = s + (a[i]-tb)*(a[i]-tb);
    };
    s = s/n;
    cout << fixed << setprecision (2) << s;
     
}
