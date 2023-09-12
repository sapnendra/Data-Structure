#include<iostream>
using namespace std;

void print2dArray(int arr[][3], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}

void rowSum(int arr[][3], int row, int col) {
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<row; j++) {
            sum += arr[i][j];
        }
        cout << i+1 <<"th row sum: "<< sum << endl;
    }
}

void colSum(int arr[][3], int row, int col) {
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<row; j++) {
            sum += arr[j][i];
        }
        cout << i+1 <<"th row sum: "<< sum << endl;
    }
}
void diaSum(int arr[][3], int row, int col) {
    int sum = 0;
    for(int i=row-1; i > 0;) {
        for(int j=0; j<col; j++) {
            i--;
            sum += arr[i][j];
        }
    }
    cout <<"Diagonal sum: "<< sum << endl;
}

int main() {
    int arr[][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}
                   };

    cout <<"Your array:"<<endl;
    print2dArray(arr, 3, 3);

    cout << endl <<"Counting Row sum: "<< endl;
    rowSum(arr, 3, 3);

    cout << endl <<"Counting Col sum: "<< endl;
    colSum(arr, 3, 3);

    cout << endl <<"Counting Diagonal sum:"<< endl;
    diaSum(arr, 3, 3);

    return 0;
}