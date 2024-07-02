#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
    return;
}
void extremeElementFirst(int arr[], int size) {
    int a = 0, b = size-1;
    int k = 0;
    while(a <= b) {
        arr[k++] = arr[a++];
        // if(a == b) {
        //     break;
        // }
        arr[k++] = arr[b--];
    }
    return;
}

// void extremePrint(int arr[],int n){
//     int low = 0;
//     int high = n-1;
//     while(low<=high){
//         cout<<arr[low]<<" ";
//         if(low == high) break;
//         cout<<arr[high]<<" ";
//         low++;
//         high--;
//     }
//     cout << endl;
// }

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    cout <<"Normal print: ";
    printArray(arr, n);

    // cout <<"Extreme element first: ";
    // extremePrint(arr, n);
    
    extremeElementFirst(arr, n);
    cout <<"Extreme element first: ";
    printArray(arr, n);

    return 0;
}