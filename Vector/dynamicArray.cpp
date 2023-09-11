#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Your array: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    // dynamic memory alocation
    int* arr = new int[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    printArray(arr, n);
    return 0;
}