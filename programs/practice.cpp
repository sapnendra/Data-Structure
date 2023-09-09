#include <iostream>
using namespace std;

// void shiftArray(int arr[], int n) {
//     // step 1
//     int temp = arr[n-1];

//     // step 2
//     // shift -> arr[i] = arr[i-1]

//     for(int i=n-1; i>=1; i--) {
//         arr[i] = arr[i-1];
//     }

//     // step 3
//     arr[0] = temp;
// }

// void swap(int arr[], int a, int b) {
//     int temp = arr[a];
//     arr[a] = arr[b];
//     arr[b] = temp;
// }

// void reverseArray(int arr[], int n) {
//     int left = 0;
//     int right = n-1;
//     while(left <= right) {
//         swap(arr, left, right);
//         left++;
//         right--;
//     }
// }

void extremePrint(int arr[], int n) {
    int left = 0;
    int right = n-1;

    while(left <= right) {
        if(left == right) {
            cout << arr[left]<< " ";
            left++;
            right--;    
        }
        else {
            cout << arr[left] << " " <<arr[right]<< " ";
            left++;
            right--;    
        }
    }
}


int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    // for(int i=0; i<n/2; i++) {
    //     for(int j=0; j<n/2; j++) {
    //         cout <<arr[i]<<","<<arr[j]<<endl;
    //     }
    // }

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         for(int k=0; k<n; k++) {
    //             cout <<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
    //         }
    //     }
    // }

    // shiftArray(arr, n);
    // for(int i=0; i<n; i++) {
    //     cout << arr[i] <<" ";
    // }
    // cout << endl;
    // reverseArray(arr, n);
    // for(int i=0; i<n; i++) {
    //     cout << arr[i] <<" ";
    // }

    extremePrint(arr, n);
    return 0;
}