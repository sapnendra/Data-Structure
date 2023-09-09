#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        int num = 1;
        for(int col=0; col<row+1; col++) {
            cout << num << " ";
            num = (num*((row-col)/col));
        }
        cout << endl;
    }
    return 0;
}