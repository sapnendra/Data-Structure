#include<iostream>
using namespace std;

int setKthBit(int n, int k ) {
    int mask = 1 << k;  // left shift by 2
    int ans = n|mask;   // OR operation
    return ans;
}

int main() {
    int num;
    cin >> num;
    int k;
    cout << "Enter kth position: ";
    cin >> k;

    int ans = setKthBit(num, k);
    cout << ans << endl;
    return 0;
}