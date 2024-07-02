#include<iostream>
using namespace std;

int main() {
    int row;
    int col;
    cin >> row >> col;

    int matrix[row][col];

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Wave print of a matrix: "<<endl;
    for(int j=0; j<col; j++) {
        if(j&1) {
            for(int i=row-1; i>=0; i--) {
                cout << matrix[i][j] <<" ";
            }
        } else {
            for(int i=0; i<row; i++) {
                cout << matrix[i][j] <<" ";
            }
        }
    }
    cout << endl;
    return 0;
}