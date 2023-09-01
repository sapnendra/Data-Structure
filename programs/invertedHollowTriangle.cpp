#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        for(int i=0; i<n-row; i++) {
            if(row == 0 || row == n-1) {
                cout << "*";
            } else {
                if(i == 0 || i == n-row-1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}