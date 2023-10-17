#include<iostream>
using namespace std;

int sum(int n) {
    if(n == 1) return 1;

    int ans = n + sum(n-1);
    return ans;
}

int main() {
    int n;
    cin >> n;

    int ans = sum(n);

    cout << "Sum between " << n << " to 1 : " << ans << endl;

    return 0;
}