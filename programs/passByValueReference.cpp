#include<iostream>
using namespace std;

void solve( int& a) {
    a++;
    cout << a << endl;
    return;
}

int main() {

    int a = 6;
    solve(a);
    cout << a<< endl;
    return 0;
}