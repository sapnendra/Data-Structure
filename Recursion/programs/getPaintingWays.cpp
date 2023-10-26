#include<iostream>
using namespace std;

int getPaintWays(int n, int k) {
    // base cases
    if(n == 0) return 0;
    if(n == 1) return k;
    if(n == 2) return k+(k*(k-1));

    // recussive call and processing
    int ans = (k-1)*(getPaintWays(n-1, k) + getPaintWays(n-2, k));
    return ans;
}

int main() {
    int n;
    int k;
    cin >> n >> k;

    int ans = getPaintWays(n, k);
    cout << "Total way to paint a poll " << n << " with " << k << " colors: " << ans << endl;
    return 0;
}