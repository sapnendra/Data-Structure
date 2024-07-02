#include<iostream>
#include<vector>
using namespace std;

int findPivotIndex(vector<int> arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s <= e) {
            // corner case
            // only one element
            if(s == e) {
                return s;
            }
            // yaha par ham array ke left ki oor range se bahar se ja sakte the
            if(mid-1 >= 0 && arr[mid] < arr[mid-1]) {
                return mid-1;
            // yaha par bhi ham array ke rihgt ki oor range ke bahar ja sakte the
            } else if(mid-1 < n && arr[mid] > arr[mid+1]) {
                return mid;
            } else if(arr[mid] < arr[s]) {
                e = mid-1;
            } else {
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return -1;    
}

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    // arr.push_back(16);
    // arr.push_back(2);
    // arr.push_back(4);
    // arr.push_back(6);
    // arr.push_back(8);
    // arr.push_back(10);

    int pivotIndex = findPivotIndex(arr);
    cout << "Pivot index is: "<< pivotIndex << endl;
    return 0;
}

