#include<bits/stdc++.h>
using namespace std;

void mergeUsingGap(vector<int> &arr, vector<int> &arr2) {
    int n = arr.size();
    int m = arr2.size();
    int totalSize = n+m;
    int gap = (totalSize/2) + (totalSize%2);
    while(gap > 0) {
        int i = 0, j = gap;
        while(j <= totalSize) {
            // comparing element in first array - arr[i] > arr[j] swap their values
            if(j < n && arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }

            // comparing element in both arrays
            else if(j >= n && i < n && arr[i] > arr2[j-n]) {
                swap(arr[i], arr2[j-n]);
            }

            // comparing element in second array
            else if(j >= n && i >= n && arr2[i-n] > arr2[j-n]) {
                swap(arr2[i-n], arr2[j-n]);
            }
            i++;
            j++;
        }
        gap = gap <= 1 ? 0 : (gap/2) + (gap%2);
    }
}