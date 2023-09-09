#include<iostream>
using  namespace std;

int main() {
    int n;
    cin >> n;

    int num = 1;
    for(int row=0; row<n; row++) {
        for(int i=0; i<row+1; i++) {
            // if(i == row) {
            //     cout << num++;
            // } else {
            //     cout << num++ << "*";
            // }
            cout << num++;
            if(i < row) {
                cout <<"*";
            }
        }
        cout << endl;
    }
    
    int num2 = num - n;
    for(int row=0; row<n; row++) {
        int num3 = num2;
        for(int i=0; i<n-row; i++) {
            // if(i == n-row-1) {
            //     cout << num3--;
            // } else {
            //     cout << num3++ <<"*";
            // }
            cout << num3++;
            if(i < n-row-1) {
                cout <<"*";
            }
        }
        num2 = num2 - (n-row-1);
        cout << endl;
    }
    return 0;
}