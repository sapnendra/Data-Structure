#include<bits/stdc++.h>
using namespace std;

int main() {    
    int arr[] = {1, 1, 2, 2, 2, 2, 3, 4};
    int n = sizeof(arr)/sizeof(int);
    int *it = lower_bound(arr, arr+n, 2);
    int *it2 = upper_bound(arr, arr+n, 2);

    cout << "index first:" << it-arr << endl;
    cout << "index last: " << (it2-arr)-1 << endl;
    int total_occ = *it + *it2-1;
    cout << "Total_occ :" << total_occ << endl;;
    return 0;
}