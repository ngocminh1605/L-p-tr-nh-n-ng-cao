# include <iostream>
# include <string>
using namespace std;
int main () {
    string text;
    getline (cin,text);
    int count = 0,i;
    for (i = 0 ; i < text.length() ; i++) {
        if (text[i] ==' ') {
            cout << text[i];
            count++;} 
        else break;
    }
    i = count;
    while (i < text.length() ) {
        if (text [i] != ' ') {
		cout << text[i]; i++;}
        else {
            while (text[i] == ' ') {i++ ;}
            cout <<" ";
        }
    }
    return 0;
}
