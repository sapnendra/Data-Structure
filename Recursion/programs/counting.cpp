#include<iostream>
using namespace std;

void printCounting(int n) {

    // base case
    if(n == 1) {
        cout << 1 << " ";
        return;
    }
    // processing
    // cout << n << " ";
    // recursion call
    printCounting(n-1);
    cout << n << " ";
}

int main() {

    int n;
    cin >> n;

    printCounting(n);

    return 0;

}