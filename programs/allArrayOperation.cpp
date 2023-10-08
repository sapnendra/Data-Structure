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
    int arr2[n];
    for(int i=0; i<n; i++) {
        int newIdx = (i+k)%n;
        arr2[newIdx] = arr[i];
    }

    print_Array(arr2, n);
    
}

void switchCaseEx(int num) {

    switch (num) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;

        default :
            cout << "Invalid Expression" << endl;
            break;
    }

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    return 0;
}