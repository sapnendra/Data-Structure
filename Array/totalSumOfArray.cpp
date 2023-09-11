#include<iostream>
using namespace std;

int totalSum(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int sum = totalSum(arr, n);
    cout <<"Total sum of array elements: "<<sum<<endl;

    return 0;
}