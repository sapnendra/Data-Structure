#include<iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index) {
    // base case 
    if(index >= size) return true;

    // processing  
    if(arr[index] > arr[index-1]) {
        // Aage check karna padega, ab recursion dekh lega
        // recursively call
        bool goForword = checkSorted(arr, size, index+1);
        return goForword;
    } else {
        // Sorted nahi hai
        return false;
    }
    
}

int main() {
    int arr[] = {10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = 1;

    bool isSorted = checkSorted(arr, n, index);

    if(isSorted) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}