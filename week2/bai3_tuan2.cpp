# include <iostream>
# include <math.h>
using namespace std;

int main () {
    int m,n,i;
    cin >> m >> n ;
    for (i = sqrt(m) ; i <= sqrt (n) ; i++) {
        if (i*i >= m && i*i <= n) cout << i*i <<" ";
    };
    return 0;
}
