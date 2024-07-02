#include<iostream>
#include<climits>
using namespace std;

int findMinimum(int arr[], int size) {
    int min = INT_MAX;
    for(int i=0; i<size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int minimumElement = findMinimum(arr, n);
    cout <<"Minimum element in this Array: "<< minimumElement <<endl;
}