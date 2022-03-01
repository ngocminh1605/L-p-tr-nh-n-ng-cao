# include <iostream>
# include <string>
using namespace std;

int main () {
    string s;
    int i,n;
    getline(cin,s);
    int k =0;
    for (i = 0; i < s.length() ;i++ ) {
        if (s[i] == ' ') k++; 
    };
    cout << k+1;
}
