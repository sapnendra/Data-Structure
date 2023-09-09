#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        int num = row+1;
        for(int col=0; col<n-row; col++) {
            if(row == 0 || row == n-1) {
                cout << num++;
            } else {
                if(col == 0 || col == n-row-1) {
                    cout << num++;
                } else {
                    cout <<" ";
                    num++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}