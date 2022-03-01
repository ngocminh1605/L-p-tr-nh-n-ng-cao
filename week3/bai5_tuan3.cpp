# include <iostream>
using namespace std;

int main () {
    int n,i,k;
    cin >> n;
    int array[n];
    for (i = 0;i < n;i++ ) cin >> array[i];
    bool kt = true;
    for (int k = 0; k < n/2; k++) {
    if ( array[k] != array[n-1-k] ){
    cout <<"Asymmetric array.";
    kt = false;
    break;
    }
    }
    if (kt == true) cout << "Symmetric array.";
}
