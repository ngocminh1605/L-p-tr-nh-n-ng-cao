# include <iostream> 
using namespace std;

int main () {
    int count = 0;
    long int n;
    cin >> n;
    do {
        n = n/10;
        count++;
    } while ( n!= 0);
    cout << count ;
    return 0;
}
