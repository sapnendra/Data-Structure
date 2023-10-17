#include<iostream>
using namespace std;

void printAllOccurenceIndex(int arr[], int n, int index, int target) {
    // base case 
    if(index >= n) return;

    // processing
    if(arr[index] == target) {
        cout << index << " ";
    }

    // recursive call
    printAllOccurenceIndex(arr, n, index+1, target);
}

int main() {
    int arr[] = {10, 30, 10, 10, 10, 39, 39, 10};
    int n  = sizeof(arr)/sizeof(int);
    int index = 0;
    int target = 10;

    printAllOccurenceIndex(arr, n, index, target);
    cout << endl;
    return 0;
}