# include <iostream>
# include <string>
using namespace std;

int main () {
    int i,num = 0,al = 0,other = 0;
    string c;
    getline (cin,c);
    for (i = 0; i < c.length() ;i++ ) {
        if ('a' <= c [i] && c[i] <= 'z' || 'A' <= c[i] && c[i] <= 'Z')  al++;
        else if ('0' <= c[i] && c[i] <= '9') num++;
        else other ++;
    }
    cout << al <<" "<< num <<" "<<other;
}
