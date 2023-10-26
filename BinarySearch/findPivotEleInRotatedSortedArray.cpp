#include<iostream>
using namespace std;

int findPivotElement(int arr[], int size) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start <= end) {
        if(start == end) return start;
        
        else if(arr[mid] > arr[mid+1]) {
            return mid;
        }
        
        else if(arr[mid] < arr[mid-1]) {
            return mid-1;
        }

        else if(arr[start] > arr[mid]) {
            // pivot element exist in left
            end = mid-1;
        }

        else {
            // pivot element exist in right
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = findPivotElement(arr, n);
    cout << "Your pivot element found at index: " << ans << endl;

    return 0;
}