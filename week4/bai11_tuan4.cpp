# include <iostream>
# include <string>

using namespace std;

string pigLatin(string word) {
    if (word[0] == 'u' || word[0] == 'e' ||word[0] == 'o' ||word[0] == 'a' ||word[0] == 'i'  ) {
        word = word + "way";
        return word;
    } else {
        word = word+word[0] +"ay";
        word.erase (0,1);
        return word;
    }
};
int main () {
	string word;
cin >> word;
cout << pigLatin (word);
}

