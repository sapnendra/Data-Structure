#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        char ch;
        for(int i=0; i<row+1; i++) {
            int num = i+1;
            ch = num + 'A' -1;
            cout << ch;
        }

        for(char alphabet = ch-1; alphabet >= 'A'; alphabet--) {
            cout << alphabet; 
        }
        cout << endl;
    }
    return 0;
}