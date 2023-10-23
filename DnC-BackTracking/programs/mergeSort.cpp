#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end) {
    int mid = start + (end-start)/2;
    
    int lenLeft = mid - start + 1;
    int lenRight = end - mid;

    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    // copy values from original array to left array
    int k = start;
	//k -> starting index of left array values in original arrya
    for(int i=0; i<lenLeft; i++) {
        left[i] = arr[k];
        k++;
    }

    // copy values from original array to right array
    k = mid+1;
    for(int i=0; i<lenRight; i++) {
        right[i] = arr[k];
        k++;
    }

    // Actual merge logic here(using 2 pointee approach)
    // left array is already sorted
    // right arary is already sorted

    int leftIndex = 0;
    int rightIndex = 0;
    // yahi par galti karte h log
    int mainArrayIndex = start;
    while(leftIndex < lenLeft && rightIndex < lenRight) {
        if(left[leftIndex] < right[rightIndex]) {
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        } else {
            arr[mainArrayIndex]  = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }
    
    // 2 more cases here: 

    // 1-> left array is not empty and right array is empty
    while(leftIndex < lenLeft) {
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    // 2-> right array is not empty and left array is empty
    while(rightIndex < lenRight) {
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }
}

void mergeSort(int arr[], int start, int end) {
    // base case
    if(start >= end) return;

    // one case solution
    int mid = start + (end-start)/2;

    // left array calling mergeSort
    mergeSort(arr, start, mid);

    // right array calling mergeSort
    mergeSort(arr, mid+1, end);

    // After performing above two steps
    // merge two sorted array
    merge(arr, start, end);
}

int main() {

    int arr[] = {2,4,1,3,5,7,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    cout << "Before merge sort" << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;

    mergeSort(arr, start, end);
    cout << "After merge sort" << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}