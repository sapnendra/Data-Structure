#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int n = num/2;

    for(int row=0; row<n; row++) {
        // first star triangle pyramid
        for(int str=0; str<n-row; str++) {
            cout <<"* ";
        }

        // first space full pyramid
        for(int spce=0; spce<2*row+1; spce++) {
            cout <<"  ";
        }

        // second star triangle pyramid
        for(int str=0; str<n-row; str++) {
            cout <<"* ";
        }
        cout << endl;
    }

    for(int row=0; row<n; row++) {
        // first star triangle pyramid
        for(int str=0; str<row+1; str++) {
            cout <<"* ";
        }

        // first space full pyramid
        for(int spce=0; spce<(2*n-2*row-1); spce++) {
            cout <<"  ";
        }

        // second star triangle pyramid
        for(int str=0; str<row+1; str++) {
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}