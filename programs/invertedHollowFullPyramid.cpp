#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        // spaces
        for(int spce = 0; spce<row; spce++) {
            cout << " ";
        }

        // stars
        for(int str = 0; str<n-row; str++) {
            if(str == 0 || str == n-row-1) {
                cout <<"* ";
            } else {
                cout <<"  ";
            }
        }

        cout << endl;
    }
    return 0;
}