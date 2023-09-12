#include<iostream>
using namespace std;

void print2dArray(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}

bool isFound(int arr[][4], int row, int col, int target) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    // if target is not present
    return false;
}

int main() {
    int arr[][4] = {{12, 34, 56, 23},
                    {23, 86, 234, 23},
                    {32, 454, 32, 34},
                    {34, 56, 67, 15,}
                   };
    int row = 4;
    int col = 4;

    cout <<"Your Array:"<<endl;
    print2dArray(arr, row, col);

    int target;
    cout << "Enter your target: ";
    cin >> target;

    if(isFound(arr, row, col, target)) {
        cout <<"Target found"<<endl;
    } else {
        cout <<"Target not found"<<endl;
    }
    return 0;
}