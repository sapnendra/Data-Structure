#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(arr[mid] == target) return mid;
        else if(target < arr[mid]) end = mid-1;
        else start = mid+1;
    }
    // if target not found
    return -1;
}

int exponentialsearch(int arr[], int n, int target) {
    if(arr[0] == target) return 0;

    int i = 1;
    while(i<n && arr[i]<=target) {
        i = i<<1; // i = i*2 // i*=2
    }
    return binarySearch(arr, i/2, min(i, n-1), target);
}

int main() {
    int arr[] = {3,6,7,8,12,33,45,56,66,67,88,90};
    int n = sizeof(arr)/sizeof(int);

    int target = 90;
    int index = exponentialsearch(arr, n, target);
    cout << "Target found at index: " << index << endl;
    return 0;
}