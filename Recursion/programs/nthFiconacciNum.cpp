#include<iostream>
using namespace std;

int fib(int n) {
    if(n < 0) return -1;
    if(n == 0) return 0;
    if(n == 1) return 1;

    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main() {
    int n;
    cin >> n;

    int ans = fib(n);

    if(ans < 0) {
        cout << "Invalid input" << endl;
    }

    cout << "nth fibonacci number is: " << ans << endl;

    return 0;
}