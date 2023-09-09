#include<iostream>
using namespace std;

int main() {
    int n = 10;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter your target value that you want to search: ";
    cin >> target;

    bool flag = false;
    int index = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            flag = true;
            index = i;
            break;
        }
    }

    if(flag == true) {
        cout << "Your target is found at index: "<< index << endl;
    } else {
        cout << "Your target is not found"<< endl;
    }
    return 0;
}