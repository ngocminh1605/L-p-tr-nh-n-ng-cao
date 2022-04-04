# include <iostream>
# include <string>
using namespace std;

int main () {
	string s;
	int i;
	cin >> s;
	while (i < s.length()) {
	    if (s[i] == s[i+1]) {
		s.insert(s.begin()+i+1, '*');
		i++;} else i++;
	};
	cout << s;
	return 0;
}
