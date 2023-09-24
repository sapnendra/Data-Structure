#include <bits/stdc++.h>
using namespace std;

vector<int> findClosest(int arr[], int n, int k, int x) {
    vector<int> diff;
    int idx = 0;
    while(idx < n) {
        diff.push_back(abs(x - arr[idx]));
        idx++;
    }

    vector<int> ans;
    sort(diff.begin(), diff.end());
    for(int i=0; i<k; i++) {
        ans.push_back(diff[i]);
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int k;
    cout << "Enter k: ";
    cin >> k;
    int x;
    cout << "Enter x: ";
    cin >> x;

    vector<int> close = findClosest(arr, n, k, x); 

    for(int i=0; i<k; i++) {
        cout << close[i] << " ";
    }
    
    return 0;
}