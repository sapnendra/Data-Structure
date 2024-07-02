#include<bits/stdc++.h>
using namespace std;

int findSecondSmallest(int arr[], int size) {

    if(size < 2) return -1;

    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for(int i=1; i<size; i++) {
        if(arr[i] < smallest) {
            sSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] != smallest && arr[i] < sSmallest) {
            sSmallest = arr[i];
        }
    }

    return sSmallest;
}

int findSecondLargest(int arr[], int size) {
    
    if(size < 2) return -1;

    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=1; i<size; i++) {
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }

    return slargest;
}

int main() {
    int arr[] = {1,4,2,2,3,7,8,8,9};
    int size = sizeof(arr)/sizeof(int);
    int secondSmallest = findSecondSmallest(arr, size);
    int secondLargest = findSecondLargest(arr, size);

    cout << "Second largest: " << secondLargest << endl;
    cout << "Second smallest: " << secondSmallest << endl;

    return 0;
}