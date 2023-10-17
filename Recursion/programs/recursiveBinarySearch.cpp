#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {

    // base case
    if(start > end) 
        return -1;  // element not found

    // processing
    int mid = start + (end-start)/2;
    if(target == arr[mid]) {
        return mid;
    }
    if(target > arr[mid]) {
        // go to right
        return binarySearch(arr, mid+1, end, target);
    }
    else {
        // go to left
        return binarySearch(arr, start, mid-1, target);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    int low = 0;
    int high = size-1;

    int searchIndex = binarySearch(arr, low, high, target);
    cout << "Target found at index: " << searchIndex << endl;

    return 0;
}