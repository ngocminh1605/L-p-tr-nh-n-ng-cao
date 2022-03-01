# include <iostream>
# include <string>

using namespace std;

int main () {
       string text;
       getline (cin ,text);
       int i = 0;
       while (i < text.length() ) {
           if (text.substr(i,4) != "Zues" || i > text.length() ) {
           cout << text[i] ;
           i++;
       } else {
           cout << "Zeus";
           i=i+4;
       };
       };
       return 0;
}
