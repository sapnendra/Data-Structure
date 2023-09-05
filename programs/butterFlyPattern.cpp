#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row++) {
        // first star triangle
        for(int str=0; str<row+1; str++) {
            cout << "*";
        }

        // full pyramid space
        for(int spce=0; spce<(2*n-2*row-2); spce++) {
            cout <<" ";
        }

        // second star triangle
        for(int str=0; str<row+1; str++) {
            cout <<"*";
        }

        cout << endl;
    }

    for(int row=0; row<n; row++) {
        
        // first star inverted triangle
        for(int str=0; str<(n-row); str++) {
            cout << "*";
        }

        // full inverted pyramid space
        for(int spce=0; spce<(2*row); spce++) {
            cout <<" ";
        }

        // // second star triangle
        for(int str=0; str<(n-row); str++) {
            cout <<"*";
        }

        cout << endl;
    }
    return 0;
}