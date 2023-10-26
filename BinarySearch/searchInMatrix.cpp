#include<iostream>
using namespace std;

bool searchInMatrix(int matrix[][3], int row, int col, int target) {
    int n = row*col;
    int start = 0;
    int end = n-1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        int rowIndex = mid/col;
        int colIndex = mid%col;
        int currNumber = matrix[rowIndex][colIndex];
        if(target == currNumber) return true;
        else if(target < currNumber) {
            end = mid-1;
        } else {
            start =mid+1;
        }
    }
    return false;
}

int main() {
    int matrix[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    int target;
    cin >> target;
    bool flag = searchInMatrix(matrix, row, col, target);
    if(flag) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}