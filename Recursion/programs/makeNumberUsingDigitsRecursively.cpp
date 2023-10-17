#include<iostream>
using namespace std;

int makeNumber(int arr[], int n, int index, int &ans) {
    // base case
    if(index >= n) return 0;
    
    // processing
    ans = ans*10 + arr[index];

    // recursive call
    makeNumber(arr, n, index+1, ans);
}

int main() {
    int arr[] = {0, 0, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = 0;

    int ans  = 0;

    makeNumber(arr, n, index, ans);
    cout << "Your number is here: " << ans << endl;

    return 0;
}