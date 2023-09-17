#include<iostream>
using namespace std;

void pairSum(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            sum =  arr[i] + arr[j];
            cout << "Sum of: " <<arr[i]<<"+"<<arr[j]<< " = " << sum << endl;
        }
    }
}

int main() {
    int arr[5] = {10, 20, 30};
    int n = 3;

    // pair sum
    pairSum(arr, n);

    // printing all pairs

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cout <<arr[i]<<","<<arr[j]<<endl;
    //     }
    // }

    // printing arr triplates

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         for(int k=0; k<n; k++) {
    //             cout <<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
    //         }
    //     }
    // }
    return 0;
}