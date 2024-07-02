#include<iostream>
using namespace std;

void extremePrint(int arr[], int size) {
    int i=0;
    int j=size-1;
    while(i<j) {
        cout << arr[i] << " ";
        cout << arr[j] << " ";
        i++;
        j--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    extremePrint(arr, size);
    return 0;
}