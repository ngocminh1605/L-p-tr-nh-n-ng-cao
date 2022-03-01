# include <iostream>
# include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    double a[10000];
    for (i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (i = n - 1; i >= 0; i--) cout << fixed << setprecision(2) << a[i] << " ";
}

