#include<iostream>
using namespace std;

int main() {
    // int arr[] = {10, 20, 30, 40, 50};
    // int* ptr = arr;
    // cout << "Address of array : " << ptr << endl;

    // cout << "Address of array &arr: " << &arr+1 << endl;
    // cout << "Address of array &arr: " << &arr+2 << endl;
    // cout << "Address of array &arr: " << &arr+3 << endl;

    // cout << "0th ele: " << arr[0] << endl;
    // cout << "&arr[0]: (same as &arr and arr) - means first value address: " << &arr[0] << endl;

    // cout << "*arr+0: " << *arr+0 << endl;
    // cout << "*arr+100: " << *arr+100 << endl;
    // cout << "*arr+200: " << *arr+200 << endl;
    // cout << "*arr+300: " << *arr+300 << endl;
    // cout << "*arr+400: " << *arr+400 << endl;

    // cout << "*(arr)+3000: " << *(arr)+3000 << endl;
    // cout << "*(arr)+4000: " << *(arr)+4000 << endl;
    // cout << "*(arr+1): same as = arr[1]" << *(arr+1) << endl;
    // cout << "*(arr+2): same as = arr[2]" << *(arr+2) << endl;
    // cout << "*(arr+3): same as = arr[3]" << *(arr+3) << endl;
    // cout << "*(arr+4): same as = arr[4]" << *(arr+4) << endl;
    // cout << "*(arr+5): same as = arr[5]" << *(arr+5) << endl;   // array size overflow


    // int arr[] = {10, 20, 30, 40, 50};
    // int* ptr = arr2;

    // cout << ptr << endl;
    // cout << *ptr << endl;

    // ptr = ptr+1;

    // cout << ptr << endl;
    // cout << *ptr << endl;

    int arr[] = {10, 20, 30, 40, 50};

    cout << "sizeof(arr): " << sizeof(arr) << endl;

    int* p = arr;
    int* q = arr+1;

    cout << arr << endl;
    cout << "&arr: " << &arr << endl;
    cout << "*arr = arr[0]: " << *arr << endl;

    cout << "p = arr = " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p = arr[0]: " << *p << endl;
    
    cout << "q: second block of array: address: " << q << endl;
    cout << "&q: " << &q << endl;
    cout << "*q: next element of array: address: " << *q << endl;

    cout << "*(p)+1: arr[0]+1 = " << *(p)+1 << endl;
    cout << "*(p)+2: arr[0]+2 = " << *(p)+2 << endl;
    cout << "*(q)+2: arr[1]+2 = " << *(q)+2 << endl;
    cout << "*(q+2): arr[3] = " << *(q+2) << endl;

    cout << "*(q+4): arr[5]: does not exist = NULL = " << *(q+4) << endl;
 
    return 0;
}