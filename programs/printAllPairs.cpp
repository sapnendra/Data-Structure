#include<iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30,40,50};
    int n = 5;
    // for(int i=0; i<n/2; i++) {
    //     for(int j=0; j<n/2; j++) {
    //         cout <<arr[i]<<","<<arr[j]<<endl;
    //     }
    // }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                cout <<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
        }
    }
    return 0;
}