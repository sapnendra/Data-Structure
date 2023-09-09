#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        // half pyramid
        for(int col=0; col<row+1; col++) {
            cout << col+1;
        }
        // next half pyramid
        int num = row;
        for(int col=0; col<row; col++) {
            cout << num--;
        }
        cout << endl;
    }
    for(int row=0; row<n; row++) {
        int num = 1;
        for(int col=0; col<n-row-1; col++) {
            cout << num++;
        }
        
        int num2 = n-row-2;
        for(int col=0; col<n-row-2; col++) {
            cout << num2--;
        }

        // int num = 1;
        // for(int col=0; col<n-row-1; col++) {
        //     cout << num++;
        // }
        // int num2 = num;
        // for(col=0; col<; col++) {

        // }
        cout << endl;
    }
    return 0;
}