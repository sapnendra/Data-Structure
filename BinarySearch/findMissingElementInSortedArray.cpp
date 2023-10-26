#include<iostream>
using namespace std;

int findMissingElement(int arr[], int size) {
    int ans = 0;
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start <= end) {
        if((arr[mid]-mid) == 1) {
            // missing element exist in right side
            start = mid+1;
        } else {
            // my answer is mid or exist in left side
            ans = mid;
            end = mid-1;
        }
        if(start == size) return size+1;
        mid = start + (end-start)/2;
    }
    return ans+1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = findMissingElement(arr, n);
    cout << "Your missing element is: " << ans << endl;

    return 0;
}