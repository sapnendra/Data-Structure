#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        // spaces
        for(int spce=0; spce<n-row-1; spce++) {
            cout << " ";
        }
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
    return 0;
}