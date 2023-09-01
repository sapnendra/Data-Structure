#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        // spaces
        for(int spce = 0; spce<n-row-1; spce++) {
            cout << " ";
        }

        // stars
        for(int str = 0; str<row+1; str++) {
            if(str == 0 || str == row) {
                cout <<"* ";
            } else {
                cout <<"  ";
            }
        }

        cout << endl;
    }
    return 0;
}