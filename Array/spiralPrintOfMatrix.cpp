#include<iostream>
using namespace std;

int main() {
    int row;
    int col;
    cin >> row >> col;

    int matrix[5][5];

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Spiral print of a matrix: "<< endl;
    int strRow = 0;
    int endCol = col-1;
    int endRow = row-1;
    int strCol = 0;
    
    int totalEle = row*col;
    while(totalEle--) {
        // starting row
        for(int i=strCol; i<=endCol; i++) {
            cout << matrix[strRow][i] <<" ";
        }
        strRow++;

        // ending column
        for(int i=strRow; i<=endRow; i++) {
            cout << matrix[i][endCol] << " ";
        }
        endCol--;

        // ending row
        for(int i=endCol; i>=strCol; i--) {
            cout << matrix[endRow][i] << " ";
        }
        endRow--;

        // starting col
        for(int i=endRow; i>=strRow; i--) {
            cout << matrix[i][strCol];
        }
        strCol--; 
    }
    cout << endl;
    return 0;
}