#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void doubleUp(int arr[], int size) {
    for(int i=0; i<size; i++) {
        arr[i] = arr[i]*2;
    }
    return;
}

int main() {

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout <<"Before double-up array: ";
    printArray(arr, n);

    doubleUp(arr, n);
    cout <<"After double-up array: ";
    printArray(arr, n);

    return 0;
}