#include<iostream>
using namespace std;

void quickSort(int arr[], int start, int end) {
    // base case
    if(start >= end) return;

    // one case solution
    int pivot = end;
    int i = start - 1;
    int j = start;
    while(j < pivot) {
        if(arr[j] < arr[pivot]) {
            ++i;
            swap(arr[i], arr[j]);
        }
        ++j;
    }
    ++i;
    swap(arr[i], arr[pivot]);
    // After solving one case, we will call recursion for left of the pivot and right of the pivot
    quickSort(arr, start, i-1);
    quickSort(arr, i+1, end);
}

int main() {
    int arr[] = {2,4,1,3,5,7,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    cout << "Before quick sort" << endl;
    for(int i=0;  i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, start, end);

    cout << "After quick sort" << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}