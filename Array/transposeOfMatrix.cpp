#include<iostream>
using namespace std;

void printMatrix(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j <col; j++) {
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
    }
}

void transposeOfMatrix(int mat[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=i; j<col; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    return;
}

int main() {
    int arr[4][4];
    int row = 4;
    int col = 4;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl <<"Original Matrix: "<<endl;
    printMatrix(arr, row, col);

    cout << endl <<"Transposing the matrix -"<<endl;
    transposeOfMatrix(arr, row, col);

    cout << endl <<"Transpose matrix: "<<endl;
    printMatrix(arr, row, col);

    return 0;
}