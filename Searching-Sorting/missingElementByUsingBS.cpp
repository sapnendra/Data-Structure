#include<iostream>
using namespace std;

int findMissingElement(int arr[], int size) {
    
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << endl <<"Finding missing element  ..."<< endl << endl;

    int missingEle = findMissingElement(arr, n);
    cout <<"Your missing element in [1, n+1] range: "<< missingEle << endl;
}