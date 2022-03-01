# include <iostream>
using namespace std ;
int main () {
    int n,i;
    int a[1000],b[1000];
    cin >> n ;
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < n; i++) cin >> b[i];
    bool kt = true;
    for (i = 0 ;i < n; i++) {
        if (a[i] != b[i] ) {
            kt = false;
            break;
        };
    };
    if (kt == false ) cout << "NO" ;
    else cout << "YES";
}
