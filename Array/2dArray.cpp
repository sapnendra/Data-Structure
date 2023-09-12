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

int main() {
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    print2dArray(arr, 3, 3);


    return 0;
}