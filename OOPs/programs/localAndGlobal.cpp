#include<bits/stdc++.h>
using namespace std;

int num = 100;  // global variable

int main() {
    num = 200;  // global x
    int num = 20;
    cout << num << endl; // local variable
    cout << ::num << endl; // global variable accessing inside main function using scope resolution operator
    return 0;
}