#include<iostream>
using namespace std;

int countZeros(int arr[], int size) {
    int zeroCount = 0;
    for(int i=0; i<size; i++) {
        if(arr[i] == 0) {
            zeroCount++;
        }
    }
    return zeroCount;
}

int countOnes(int arr[], int size) {
    int onesCount = 0;
    for(int i=0; i<size; i++) {
        if(arr[i] == 1) {
            onesCount++;
        }
    }
    return onesCount;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    cout <<"Only zeros and ones: "<<endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int zeros = countZeros(arr, n);
    int ones = countOnes(arr, n);

    cout <<"total number of zeros in array: "<< zeros <<endl;
    cout <<"total number of ones in array: "<< ones <<endl;

    return 0;
}