#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void reverseArray(int arr[], int size) {
    int i=0, j=size-1;
    while(i<=j) {
        swap(arr, i, j);
        i++;
        j--;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout <<"Original array: ";
    printArray(arr, n);

    reverseArray(arr, n);
    cout <<"Reverse array: ";
    printArray(arr, n);

    return 0;
}