#include<iostream>
using namespace std;

//  second method exist
//  void rotate(vector<int>& nums, int k) {
        // int size = nums.size();
        // vector<int> ans(size);

        // for(int index=0; index<size; index++) {
        //     int newIndex = (index+k)%size;
        //     ans[newIndex] = nums[index];
        // }
        // nums = ans;
//  }

void shiftArrayByKthPos(int arr[], int n, int k) {
    int temp[k];
    int itr = 0;
    for(int i=n-k; i<n; i++) {
        temp[itr] = arr[i];
        itr++;
    }

    for(int i=n-1; i>=k; i--) {
        arr[i] = arr[i-k];
    }

    for(int i=0; i<k; i++) {
        arr[i] = temp[i];
    }

    return;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        int data;
        cin >> data;
        arr[i] = data;
    }

    int k;
    cout <<"Enter k: ";
    cin >> k;

    shiftArrayByKthPos(arr, n, k);

    cout << "Printing array: " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
