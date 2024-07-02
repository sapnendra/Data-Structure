#include<iostream>
#include<vector>
using namespace std;

void spiralPrint(int matrix[][5], int row, int col,  vector<int> &ans) {
    int strRow = 0;
    int endCol = col-1;
    int endRow = row-1;
    int strCol = 0;
    vector<int> ans;
    
    int totalEle = row*col;
    while(totalEle--) {
        // starting row
        for(int i=strCol; i<=endCol; i++) {
            ans.push_back(matrix[strRow][i]);
        }
        strRow++;

        // ending columnQ
        for(int i=strRow; i<=endRow; i++) {
            ans.push_back(matrix[i][endCol]);
        }
        endCol--;

        // ending row
        for(int i=endCol; i>=strCol; i--) {
            ans.push_back(matrix[endRow][i]);
        }
        endRow--;

        // starting col
        for(int i=endRow; i>=strRow; i--) {
            ans.push_back(matrix[i][strCol]);
        }
        strCol--; 
    }
}

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
    vector<int> ans;
    spiralPrint(matrix, row, col, ans);
    for(int i=0; i<ans.size(); i++) {
        cout << matrix[i] << " ";
    }
    return 0;
}