# include <iostream>
# include <string>

using namespace std;

struct customer {
	string name;
	string accountnumber;
	int balance;
};
void nhap (customer &a) {
	cin.ignore();
	cout <<"Name :";
	getline (cin,a.name);
	cout <<"Account Number :" ; getline(cin,a.accountnumber);
	cout << "Balance :" ; cin >> a.balance;
	
};
void xuat (customer &a) {
	cout << a.name << endl;
	cout << a.accountnumber << endl;
	cout << a.balance << endl;
};

int main () {
	int x,i;
	cin >> x;
	struct customer s[x+1];
	for (i = 0; i < x; i++) {
		nhap (s[i]);
	};
	for (i = 0; i < x; i++) {
		if (s[i].balance < 200) xuat (s[i]);
	};
	return 0;
}
