#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int index = -1;
    int start = 0;
    int end = size-1;

    int mid = start+(end-start)/2;

    while(start <= end) {

        // int mid = start+(end-start)/2;

        if(arr[mid] == target) {
            // return index of found element
            return mid;
        }
        else if(target < arr[mid]) {
            // left me jao
            end = mid-1;
        }
        else if(target > arr[mid]) {
            // right me jao
            start = mid+1;
        }
        // yaha ham galti karenge
        // if you calculate mid inside the loop then no 
        // need to modify mid here.
        mid = (start+end)/2;
    }
    // returning index
    return -1;
}

int findFirstUccurence(int arr[], int size, int target) {
    int ans = -1;
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;

    while(start <= end) {

        // found
        if(target == arr[mid]) {
            ans = mid;
            // left me jao
            end = mid-1;
        }
        else if(target < arr[mid]) {
            // left me jao
            end = mid-1;
        }
        else if(target > arr[mid]) {
            // right me jao
            start = mid+1;
        }

        // yaha ham galti karenge
        // if you calculate mid inside the loop then no 
        // need to modify mid here.
        mid = (start+end)/2;
    }
    return ans;
}

int findLastUccurence(int arr[], int size, int target) {
    int ans = -1;
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;

    while(start <= end) {

        // found
        if(target == arr[mid]) {
            ans = mid;
            // right me jao
            start = mid+1;
        }
        else if(target < arr[mid]) {
            // left me jao
            end = mid-1;
        }
        else if(target > arr[mid]) {
            // right me jao
            start = mid+1;
        }

        // yaha ham galti karenge
        // if you calculate mid inside the loop then no 
        // need to modify mid here.
        mid = (start+end)/2;
    }
    return ans;
}

int findTotalOccurence(int arr[], int n, int target) {
    int firstOcc = findFirstUccurence(arr, n, target);
    int lastOcc = findLastUccurence(arr, n, target);

    int totalOcc = lastOcc - firstOcc + 1;
    return totalOcc;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int target;
    cout <<"Enter your target element: ";
    cin >> target;

    // cout << endl << "Finding your target: " << endl << endl;
    // int targetIndex = binarySearch(arr, n, target);

    // if(targetIndex == -1) {
    //     cout << "Element not found!" << endl;
    // } else {
    //     cout << "Your target element found at index: "<< targetIndex << endl;
    // }

    // cout << endl << "Finding first Occurence: " << endl << endl;
    // int firstOcc = findFirstUccurence(arr, n, target);

    // if(firstOcc == -1) {
    //     cout << "Element not found!" << endl;
    // } else {
    //     cout << "Your target element found at index: "<< firstOcc << endl;
    // }
    // cout << endl << "Finding last Occurence: " << endl << endl;;
    // int lastOcc = findLastUccurence(arr, n, target);

    // if(lastOcc == -1) {
    //     cout << "Element not found!" << endl;
    // } else {
    //     cout << "Your target element found at index: "<< lastOcc << endl;
    // }

    cout << endl << "Finding total Occurence: " << endl << endl;;
    int totalOcc = findTotalOccurence(arr, n, target);

    if(totalOcc == -1) {
        cout << "Element not found!" << endl;
    } else {
        cout << "Your target element found in total " << totalOcc << " indexes" << endl;
    }
    return 0;
}