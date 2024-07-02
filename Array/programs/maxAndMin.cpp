#include<iostream>
#include<climits>
using namespace std;

void print2dArray(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}

void minAndMaxEle(int arr[][4], int row, int col) {
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    cout << "Minimum element in array: "<<min<< endl;
    cout <<"Maximum element in array: "<<max<< endl;
}

int main() {
    int arr[][4] = {{12, 34, 56, 23},
                    {23, 86, 234, 23},
                    {32, 10000, 32, 34},
                    {34, 56, 67, -1,}
                   };
    int row = 4;
    int col = 4;

    cout <<"Your Array:"<<endl;
    print2dArray(arr, row, col);

    cout << endl << "Finding min and max in array: "<< endl << endl;
    minAndMaxEle(arr, row, col);

    return 0;
}