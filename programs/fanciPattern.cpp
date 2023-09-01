#include<iostream>
using  namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        int num = row+1;
        for(int i=0; i<row+1; i++) {
            if(i == row) {
                cout << num;
            } else {
                cout << num << "*";
            }
        }
        cout << endl;
    }
    for(int row=0; row<n; row++) {
        int num = n-row;
        for(int i=0; i<n-row; i++) {
            if(i == n-row-1) {
                cout << num;
            } else {
                cout << num <<"*";
            }
        }
        cout << endl;
    }
    return 0;
}