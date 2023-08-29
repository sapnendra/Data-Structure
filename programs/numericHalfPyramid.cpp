#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        // for(int j=1; j<row+2; j++) {
        //     cout << j <<" ";
        // }

        // or

        for(int j=0; j<row+1; j++) {
            cout << j+1 <<" ";
        }
        cout << endl;
    }
    return 0;
}