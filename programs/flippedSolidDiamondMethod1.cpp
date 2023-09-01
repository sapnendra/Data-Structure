#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {

        // stars
        for(int str=0; str<n-row; str++) {
            cout << "* ";
        }

        // spaces
        for(int spce=0; spce<row; spce++) {
            cout <<"  ";
        }

        // spaces
        for(int spce=0; spce<row; spce++) {
            cout <<"  ";
        }

        // stars
        for(int str=0; str<n-row; str++) {
            cout << "* ";
        }
        
        cout << endl;
    }
    for(int row=0; row<n; row++) {
        // stars
        for(int str=0; str<row+1; str++) {
            cout <<"* ";
        }

        // spaces
        for(int spce=0; spce<n-row-1; spce++) {
            cout <<"  ";
        }

        // spaces
        for(int spce=0; spce<n-row-1; spce++) {
            cout <<"  ";
        }

        // stars
        for(int str=0; str<row+1; str++) {
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}