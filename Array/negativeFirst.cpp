#include<iostream>
using namespace std;

void negativeFirst(int arr[], int n) {
    int j=0;
    for(int i=0; i<n; i++) {
        if(arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[7] = {3, 5, -2, 5, 7, 3, -1};

    int size = 7;
    
    negativeFirst(arr, size);

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}