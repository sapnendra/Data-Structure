#include<iostream>
using namespace std;

int findLastUccurence(int arr[], int size, int target) {
    int ans = -1;
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;

    while(start <= end) {

        // found
        if(target == arr[mid]) {
            ans = mid;
            // rihgt me jao
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

    cout << endl << "Finding last Occurence: " << endl << endl;
    int lastOcc = findLastUccurence(arr, n, target);

    if(lastOcc == -1) {
        cout << "Element not found!" << endl;
    } else {
        cout << "Your target element found at index: "<< lastOcc << endl;
    }
    return 0;
}