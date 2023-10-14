#include<iostream>
using namespace std;

int getPeakElementIndex(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end-start)/2;

    while(start < end) {
        if(arr[mid] < arr[mid+1]) {
             start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return mid;
}

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int peakElement = getPeakElementIndex(arr, n);
    cout << "Peak element at index : " << peakElement << endl;

    return 0;
}