#include<iostream>
using namespace std;

void doubleUpElement(int arr[], int n, int index) {
    // base case 
    if(index >= n) return;

    // processing
    arr[index] = 2 * arr[index];
    
    // recursive call
    doubleUpElement(arr, n, index + 1);
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int index = 0;

    doubleUpElement(arr, n, index);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}