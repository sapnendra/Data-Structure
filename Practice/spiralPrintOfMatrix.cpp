#include<iostream>
using namespace std;

void spiralPrint(int arr[][3], int size) {
    
}

int main() {
    int n;
    cin >> n;

    int arr[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    spiralPrint(arr, n);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}