#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target) {
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(arr[mid] == target) {
            return mid;
        } else if(target < arr[mid]) {
            e = mid-1;
        } else {
            s = mid+1;
        }
    }
    return -1;
}

int searchInInfiniteArray(int arr[], int n, int target) {
    int i = 0;
    int j = 1;
    while(arr[j] < target) {
        i = j;
        j = j*2;
    }
    return binarySearch(arr, i, j, target);
}

int main() {
    int arr[] = {2,3,4,5,6,7,8,8,12,23,34,45,56,67,78,84,98};
    int size = sizeof(arr)/sizeof(int);

    int target;
    cout << "Enter target: ";
    cin >> target;

    int index = searchInInfiniteArray(arr, size, target);
    cout <<"Target found at index: "<<index<<endl;
    return 0;
}