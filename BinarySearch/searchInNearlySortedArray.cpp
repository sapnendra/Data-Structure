#include<iostream>
using namespace std;

int isTargetExistInArray(int arr[], int n, int target) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid-1] == target && mid-1 >= 0) {
            return mid-1;
        } else if(arr[mid] == target) {
            return mid;
        } else if(arr[mid+1] == target && mid+1 < n) {
            return mid+1;
        } else if(target > arr[mid]) {
            // right
            s = mid+2;
        } else {

            // left
            e = mid-2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main() {
    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int n = 7;

    int target = 80;

    int ans = isTargetExistInArray(arr, n, target);
    if(ans == -1) {
        cout << "Target not found! " << endl;    
    } else {
        cout << "Target found at index: " << ans << endl;
    }
    return 0;
}