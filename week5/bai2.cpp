#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int roll_number;
    float marks;
};

int main() {
    int x, i;

    cout << "Enter the number of students: ";
    cin >> x;

    struct Student s[x + 1];
    
    cout << "\nEnter the students' information:\n";
    for (i = 0; i < x; i++) {
        s[i].roll_number = i + 1;
        cout << "\nInformation for Roll Number:\t" << s[i].roll_number << "\n";
		cin.ignore();
        cout << "Enter the name: ";
        getline (cin, s[i].name);

        cout << "Enter the marks: ";
        cin >> s[i].marks;
    }

    for (i = 0; i < x; i++) {
        cout << "\nThe Roll Number: " << (i + 1) << "\n";

        cout << "The Name: ";
        cout << s[i].name<<"\n";

        cout << "The Marks: " << s[i].marks << "\n";
        cout << endl;
    }
    return 0;
}
