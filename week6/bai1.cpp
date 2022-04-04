# include <iostream>
using namespace std ;

int main () {
	int n,k,i;
	cin >> n >> k;
	int a[n];
	for (i = 0 ; i < n ; i++) cin >> a[i];
	for (i = k ; i < n ; i++) cout << a[i] <<" ";
	for (i = 0 ; i < k ; i++) cout << a[i] <<" ";
	return 0;
}
