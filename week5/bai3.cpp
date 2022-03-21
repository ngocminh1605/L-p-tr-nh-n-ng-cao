# include <iostream>
# include <string>
using namespace std ;

struct student {
	string roll;
	string name;
	string address;
	int age;
};
void nhap (student &a) {
	cout <<"Enter roll : ";
	cin >> student.roll;
	cin.ignore();
	cout << "Enter name : ";
	cin >> student.name;
	cout << "Enter address : ";
	cin >> student.address;
	cout << "Enter age : ";
	cin >> student.age; 
}
void xuat (student &a) {
	cout <<"Roll : ";
	cout << student.roll <<"\n";
	cout << "Name : "<<"\n";
	cout << student.name<<"\n";
	cout << "Address : ";
	cout << student.address<<"\n";
	cout << "Enter age : ";
	cout << student.age<<"\n"; 
	
};

int main () {
	int i;
	struct student s[15];
	for (i = 0 ; i < 15 ; i++) nhap (s[i]);
	for (i = 0 ; i < 15 ; i++) xuat (s[i]);
	
}


