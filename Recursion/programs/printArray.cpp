#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index) {
    //base case
    if(index >= size) {
        return ;
    }
    
    //recursive call
    printArray(arr, size, index+1);

    // here it will print forward order
    //processing
    cout << arr[index] << " ";

    // here it will print reverse order
    //recursive call
    // printArray(arr, size, index+1);
}

bool searchArray(int arr[], int size, int index, int target) {
    //base case
    if(index >= size) return false;

    // porcessing
    if(arr[index] == target) return true;

    // recursive call
    bool found = searchArray(arr, size, index+1, target);
    return found;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int index = 0;
    int target = 5;

    bool ans = searchArray(arr, n, index, target);
    cout << ans << endl;

    return 0;
}