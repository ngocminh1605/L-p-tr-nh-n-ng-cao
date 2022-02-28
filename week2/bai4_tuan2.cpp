# include <iostream>
using namespace std;

int main () {
    int m,n;
    bool test = false;
    cin >> m >> n ;
    for (int i = 1 ; i <= m ; i++) {
        if (i*2 + (m-i)*4 == n) {
            test = true;
            cout << "chicken = "<< i <<", dog = "<< m-i;
            break;
        };
    };
    if (test == false) cout << "invalid";
    return 0;
} 
