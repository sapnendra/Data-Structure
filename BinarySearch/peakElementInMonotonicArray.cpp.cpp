#include<iostream>
using namespace std;

int getPeakElementIndex(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {

        int mid = start + (end-start)/2;

        if(arr[mid] < arr[mid+1]) {
            // I'm in left side of the peak element in the array
            // part A
            start = mid + 1;
        }
        else {
            // yaa to mai peak par hu yaa to mai
            // part B me hu
            end = mid;
        }
    }
    return start;
}

int main() {

    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int peakElement = getPeakElementIndex(arr, n);
    cout << "Peak element found at index : " << peakElement << endl;

    return 0;
}