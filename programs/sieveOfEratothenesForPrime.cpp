#include<bits/stdc++.h>
using namespace std;

Solution {
public:
    int countPrimes(int n) {
        if(n == 0) return 0;

        vector<bool> prime(n+1, true); // step 01: all are prime marked aleaady true
        prime[0] = prime[1] = false;

        int count = 0;
        
        for(int i=2; i<n; i++) { // TC of opter loop is O(n)
            // step 02:
            if(prime[i]) {
                count++;
                int j = 2*i;
                while(j<n) { // TC of inner loop is O(log(logn)) {
                    prime[j] = false;
                }
            }
        }

        return count;

    }

    // TC of countPirmes() is O(n) * O(N * log(logn(n)))
};