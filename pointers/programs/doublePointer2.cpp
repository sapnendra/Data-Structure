#include<iostream>
using namespace std;

void solve(int* &ptr) {
    ptr = ptr + 10;
    cout << endl << ptr << endl << endl; "p: ";
}

int main() {
    int a = 5;
    int *p = &a;
    cout << "p : " << p << endl;
    cout << "&p : " << &p << endl;
    cout << "*p : " << *p << endl;

    solve(p);
    
    cout << "p: " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl;
    return 0;
}