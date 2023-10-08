#include <iostream>
#include<vector>
using namespace std;

void print_Array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void printPairSum(int arr[], int n) {

    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=0; j<n;  j++) {
            sum = arr[i] + arr[j];
            cout << "Sum of : " <<arr[i]<<" + "<<arr[j]<<" : "<<sum <<endl;
        }
    }

    return;
}

void uniqueElementInArray(int arr[], int n) {
    int ans = 0;
    for(int i=0; i<n; i++) {
        ans = ans ^ arr[i];
    }
    cout << "Unique element in this array: "<<ans<<endl;
}

void modifyArray(int arr[], int n) {
    int low = 0; 
    int high = n-1;

    while(low <= high) {
        if(arr[low] == 1 && arr[high] == 0) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        } else if(arr[low] == 0) {
            low++;
        } else {
            high--;
        }
    }

    return;
}

void shiftArrayByKthPosition(int arr[], int n, int k) {
    for(int i=0; i<n; i++) {
        int temp = arr[i];
        int newIdx = (k-i)%n;
        arr[newIdx] = temp;
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

    int k;
    cin >> k;

    shiftArrayByKthPosition(arr, n, k);

    print_Array(arr, n);

    return 0;
}