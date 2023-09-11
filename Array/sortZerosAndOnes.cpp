#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortBinaryElements(int arr[], int size) {
    int i=0, j=size-1;
    while(i <= j) {
        // i ko increment krdo jb jb hame 0 dikhe
        while( arr[i] == 0 && i < j) {
            i++;
        }
        // j ko decrement krdo jb jb hame 1 dikhe
        while( arr[j] == 1 && i < j) {
            j--;
        }
        
        // agar i=1 hai & j = 0 to swap krdo
        swap(arr[i], arr[j]);
        i++;
        j--;

    }
    return;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sortBinaryElements(arr, n);
    cout <<"Sorted array: ";
    printArray(arr, n);
    
    return 0;
}