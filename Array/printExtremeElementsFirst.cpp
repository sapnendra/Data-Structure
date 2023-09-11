#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
    return;
}
void extremeElement(int arr[], int size) {
    int a = 0, b = size-1;
    int k = 0;
    for(int i=0; i<size; i++) {
        arr[k++] = arr[a];
        a++;
        arr[k++] = arr[b];
        b--;
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
    
    cout <<"Normal print: ";
    printArray(arr, n);
    
    extremeElement(arr, n);
    cout <<"Extreme element first: ";
    printArray(arr, n);

    return 0;
}