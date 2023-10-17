#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findMinimum(int arr[], int n, int index, int &minIndex, int value) {
    // base case
    if(index >= n) return;

    // processing
    if(arr[index] < value) {
        minIndex = index;
        value = arr[index];
    }

    // recursive call
    findMinimum(arr, n, index+1, minIndex, value);
}

int main() {
    int arr[] = {-1, 453, 234, 232, 5345, 3244, -154};
    int n = sizeof(arr)/sizeof(int);
    int index = 0;

    int minIndex = -1;
    findMinimum(arr, n, index, minIndex, INT_MAX);
    cout << "Minimum element found at index: " << minIndex << endl;
    return 0;
}