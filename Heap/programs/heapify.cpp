#include<iostream>
using namespace std;

void heapify(int *arr, int n, int index) {
    int leftIndex = 2*index;
    int rightIndex = 2*index + 1;
    int largestIndex = index;

    // find max value of these indexes
    if(leftIndex <= n && arr[leftIndex] > arr[largestIndex]) {
        largestIndex = leftIndex;
    }
    if(rightIndex <= n && arr[rightIndex] > arr[largestIndex]) {
        largestIndex = rightIndex;
    }
    // after these 2 conditions largestIndex will be pointing towards largest element among 3
    if(index != largestIndex) {
        swap(arr[index], arr[largestIndex]);
        // one solved here, now recursion will handle it
        index = largestIndex;
        heapify(arr, n, index);
    }
}

void buildHeap(int arr[], int size) {
    for(int index=size/2; index>0; index--) {
        heapify(arr, size, index);
    }
}

void heapSort(int arr[], int size) {
    while(size != 1) {
        swap(arr[1], arr[size]);
        size--;
        heapify(arr, size, 1);
    }     
}

int main() {
    int arr[] = {-1, 5, 10, 15, 20, 25, 12};
    int size = 6;
    buildHeap(arr, size);

    cout << "Printing Heap: " << endl;
    for(int i=1; i<=size; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    heapSort(arr, size);

    cout << "Printing Heap Sort: " << endl;
    for(int i=1; i<=size; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}