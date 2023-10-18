#include<iostream>
using namespace std;

int lowerBound(int arr[], int size, int x) {
    int start = 0;
    int end = size - 1;
    
    int ans = size;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] >= x) {
            // may be an ans
            ans = mid;
            // look for the more smaller index
            end = mid-1;
        } else {
            // got to right
            start = mid+1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {22, 22, 84, 84, 84, 84, 84, 85};
    int size = sizeof(arr)/sizeof(arr[0]);

    int x = 85;

    int ans = lowerBound(arr, size, x);
    cout << "Your lower bound index is: " << ans << endl;

    return 0;
}