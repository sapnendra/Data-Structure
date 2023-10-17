#include<bits/stdc++.h>
using namespace std;

void storeAllEven(int arr[], int n, int index, vector<int> &evenNum) {
    // base case
    if(index >= n) return;

    // processing
    if(arr[index] % 2 == 0) {
        evenNum.push_back(arr[index]);
    }

    // recursive call
    storeAllEven(arr, n, index + 1, evenNum);
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int index = 0;

    vector<int> evenNum;
    storeAllEven(arr, n, index, evenNum);
    for(auto iterate:evenNum) {
        cout << iterate << " ";
    }
    
    cout << endl;
    return 0;
}