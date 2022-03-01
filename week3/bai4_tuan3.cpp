# include <iostream>
# include <algorithm>
# include <iomanip>
using namespace std;

int main () {
    int i,n;
    cin >> n;
    double a[n+1];
    for (i = 0; i < n; i++) {cin >> a[i];};
    double k;
    cin >> k;
    a[n]=k;
    sort (a,a+n+1);
    for (i = 0; i<=n; i++) cout << fixed << setprecision (2) << a[i]<<" ";
    return 0;
    
    
}
