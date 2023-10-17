#include<bits/stdc++.h>
using namespace std;

/**
 * A function that solves a problem by recursively processing an integer and storing the remainders in a vector.
 * n the integer to be processed
 * ans, a vector to store the remainders
 * None
*/
void solve(int n, vector<int>& ans) {
    // base case
    if(n == 0) return;

    // processing
    int rem = n % 10;
    
    // recursive call
    solve(n/10, ans);

    // processing + storing
    ans.push_back(rem);
}

int main() {
    int n = 389687;
    vector<int> storeAllDigit;

    solve(n, storeAllDigit);

    for(auto it:storeAllDigit) {
        cout << it << " ";
    }
    return 0;
}