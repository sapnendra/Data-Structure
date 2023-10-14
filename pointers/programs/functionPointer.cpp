#include<iostream>
using namespace std;

void solve(int arr[]) {

    *arr = *arr+1;

    // cout << "inside func arr is : " << arr << endl;
    // cout << "&arr inside solve : " << &arr << endl;
}

int main() {

    int arr[] = {10, 12, 23, 34, 45};
    int size = sizeof(arr)/sizeof(int);

    // cout << arr << endl;
    // cout << &arr << endl;
    cout << *arr << endl;
    solve(arr);
    cout << *arr << endl;

    return 0;
}