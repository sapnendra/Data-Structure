#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findMinimum(int arr[], int n, int index, int &minimum) {
    // base case
    if(index >= n) return;

    // processing
    minimum = min(minimum, arr[index]);

    // recursive call
    findMinimum(arr, n, index+1, minimum);
}

int main() {
    int arr[] = {345, 453, 234, 232, 5345, 3244, 4353};
    int n = sizeof(arr)/sizeof(int);
    int index = 0;


    int minimum = INT_MAX;
    findMinimum(arr, n, index, minimum);
    cout << "Minimum element is: " << minimum << endl;
    return 0;
}