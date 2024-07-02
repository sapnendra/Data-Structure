#include<iostream>
using namespace std;

int findIndex(int arr[], int size, int target) {
    int index = -1;
    for(int i=0; i<size; i++) {
        if(target == arr[i]) {
            index = i;
            break;
        }
    }
    return index;
}

int main() {

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int target;
    cout <<"Enter your target element: ";
    cin >> target;

    int targetIndex = findIndex(arr, n, target);
    cout <<"Index of "<< target <<" : "<< targetIndex <<endl;

   return 0;
}