#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

void shiftArrayByOne(int arr[], int n) {
    int temp = arr[n-1];
    for(int i=n-1; i>=0; i--) {
        if(i == 0) {
            arr[i] = temp;
        } else {
            arr[i] = arr[i-1];
        }
    }
}

void shiftArrayByK(int arr[], int n, int k) {
    int idx = 0;
    int *temp = new int[k];
    for(int i=n-k; i<n; i++) {
        temp[idx] = arr[i];
        idx++;
    }

    for(int i=n-1; i>=k; i--) {
        arr[i] = arr[i-2];
    }

    for(int i=0; i<k; i++) {
        arr[i] = temp[i];
    }

    delete temp;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int k = 2;
    shiftArrayByK(arr, n, k);
    printArray(arr, n);
    return 0;
}