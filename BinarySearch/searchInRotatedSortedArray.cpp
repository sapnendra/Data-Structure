#include<iostream>
using namespace std;

int searchInRotatedSortedArray(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;

    while(start <= end) {
        int mid = start + (end-start) / 2;
        if(arr[mid] == target) {
            return mid;
        }
        if(arr[mid-1] == target && mid-1 >= 0) {
            return mid-1;
        }
        if(arr[mid+1] == target && mid+1 < n) {
            return mid+1;
        }
        if(target > arr[mid]) {
            // got to right
            start = mid + 1;
        } else {
            // go to left
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {7,8,9,1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 1;
    int ans = searchInRotatedSortedArray(arr, n, target);
    cout << "target found at index: " << ans << endl;

    return 0;

}