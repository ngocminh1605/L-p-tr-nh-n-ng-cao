# include <iostream>
using namespace std ;

int main () {
	int n,i,j,k;
	cin >> n;
	int a[n],b[n],c[n];
	k = 0;
	for (i = 0 ; i < n ; i++) cin >> a[i];
	for (i = 0 ; i < n ; i++) {
		j = 0;
		while (j < k && b[j] != a [i]) j++;
		if (j == k) {
			b[k] = a[i];
			c[k] = 1;
			k++;
		} else c[j] ++;
		
	}
	for (i = k-1; i >= 0 ; i--) {
		if (c[i] == 1) cout << b[i] <<" ";
	}
}
