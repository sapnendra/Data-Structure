#include<iostream>
using namespace std;

int findOdduccuringElement(int arr[], int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        // single element
        if(s == e) {
            return arr[s];
        }

        // mid check -> even or odd
        if(mid&1) {  // mid&1 -> true -> odd
            if(arr[mid] == arr[mid-1] && mid-1 >= 0) {
                // right me jao
                s = mid+1;
            } else {
                // left me jao
                e = mid-1;
            }
        } else { // mid&1 -> false -> even
            if(arr[mid] == arr[mid+1] && mid+1 < n) {
                // right me jao
                s = mid+2;
            } else {
                // ya to mai right part me hu ya to mai answer me hi hu
                // taht's why mai e = mid  kar raha hu
                // kyoki e = mid-1 se ans lost hoj sakta hai
                e = mid;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main() {

    int arr[] = {19, 19, 23, 23, 45, 45, 28, 11, 11, 28, 28, 10, 10};
    int n = 13;

    int ans = findOdduccuringElement(arr, n);
    cout << "Odd times occuring element found at index: " << ans << endl;

    return 0;
}