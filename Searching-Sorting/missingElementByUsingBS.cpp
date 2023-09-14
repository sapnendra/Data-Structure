#include<iostream>
using namespace std;

int findMissingElement(int arr[], int size) {
    int ans = -1;
    int start = 0;
    int end = size-1;
    // yaha par integer overflow hone ke chance the
    int mid = start + (end-start)/2;

    while(start <= end) {

        int diff = (arr[mid]-mid);
        if(diff == 1) {
            // rihgt me jao
            start = mid+1;
            // if(start == size) {
            //     return size+1;
            // }
        } else {
            // ans ko store karo
            ans = mid;
            // ya to ans hi missing hoga ya to mid ke pichhe wala missing ele hoga
            // left me jao
            end = mid-1;
        }
        // last element missing handle here
        if(start == size) {
            return size+1;
        }
        // yaha par ham galti kar sakte the mid ko update na karke
        mid = (start+end)/2;
    }
    // if(start == size /* or (ans+1 == 0)*/) {
    //     return size+1;
    // }
    return ans+1;
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