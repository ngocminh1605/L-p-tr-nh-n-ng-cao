# include <iostream>
# include <iomanip>
using namespace std;

int main () {
    int i,n;
    double a[1000] , b [1000];
    cin >> n;
    for (i = 0 ; i < n ; i++) {
        cin >> a[i];
    };
    for (i = 0 ; i < n ; i++) {
        cin >> b[i];
    };
    double s = 0;
    for (i = 0 ; i < n ; i++) {
        s = s+ a[i]*b[i];
    };
    cout << fixed << setprecision (2) << s;
}
