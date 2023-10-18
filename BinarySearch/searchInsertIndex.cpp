#include<iostream>
using namespace std;

int searchIndex(int arr[], int size, int target) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start) / 2;
    while(start <= end) {
        if(target == arr[mid]) return mid;
        else if(target > arr[mid]) start = mid+1;
        else end = mid-1;
        mid = start + (end-start) / 2;
    }

    return start;
}

int main() {
    int arr[] = {1, 3, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 2;

    int ans = searchIndex(arr, size, target);

    cout << ans << endl;

    return 0;
}