# include <iostream>
# include <ctype.h>
# include <string>
using namespace std;

int main() {
    string s;
    bool kt = true;
    cin >> s;
    if (s.length() < 6 || s.length() > 15) cout << "Invalid username.";
    else if (s[0] >= '0' && s[0] <= '9') cout << "Invalid username.";
    else {
        for (int i = 1; i < s.length() ;i++) {
            if (isalnum(s[i]) == false) {
                cout << "Invalid username."; 
                kt = false;
                break;}
        };
        if (kt == true) cout << "Valid username.";
    };
    return 0;
}
