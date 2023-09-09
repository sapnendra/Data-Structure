#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        int num = 1;
        for(int i=0; i<row+1; i++) {
            if(row == 0 || row == n-1) {
                cout << num++;
            } else {
                if(i == 0 || i == row) {
                    cout << num++;
                } else {
                    cout << " ";
                    num++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
