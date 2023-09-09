#include<iostream>
using namespace std;

void array_Printing(int arrays[], int size) {
    for(int i=0; i<size; i++) {
        cout << arrays[i] <<" ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if( arr[i] == target ) {
            // found
            return true;
        }
    }
    // not found
    return false;
}

int main() {
    int n = 5;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Input array: ";
    array_Printing(arr, n);

    int target;
    cout << "Enter your targetr element: ";
    cin >> target;

    bool flag = linearSearch(arr, n, target);
    if(flag == true) {
        cout << "Target found"<< endl;
    } else {
        cout << "Target not found" << endl;
    }
    return 0;
}