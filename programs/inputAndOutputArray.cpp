#include<iostream>
using namespace std;

int main() {

    int arr[5];
    for(int i=0; i<5; i++) {
        cout << "Enter the value for index: " << i << " ";
        cin >> arr[i];
    }

    for(int i=0; i<5; i++) {
        cout << arr[i] <<" ";
    }

    cout << endl;
    return 0;
}