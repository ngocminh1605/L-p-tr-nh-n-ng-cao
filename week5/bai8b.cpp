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
	cout << a.balance  << endl;
};

int main () {
	int x,i;
	cin >> x;
	struct customer s[x+1];
	for (i = 0; i < x; i++) {
		nhap (s[i]);
	};
	for (i = 0; i < x; i++) {
		if (s[i].balance >= 1000) s[i].balance = s[i].balance + 100 ; 
	};
	struct customer tg;
	for (i = 0 ; i < x-1 ; i++) {
		for (int j = i+1 ; j < x ; j++ ) {
			if (s[i].balance < s[j].balance ) {
				tg = s[i];
				s[i]=s[j];
				s[j]=tg;
			};
		}; 
	};
	for (i = 0 ; i < x ; i++) xuat (s[i]);
	return 0;
}







