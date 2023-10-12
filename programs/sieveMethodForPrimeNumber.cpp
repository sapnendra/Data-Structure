#include<bits/stdc++.h>
using namespace std;

vector<bool> Sieve(int n) {
    // create a sieve array of n size for telling it is prime
    vector<bool>sieve(n+1, true);
    sieve[0] = sieve[1] = false;
    for(int i=2; i<=sqrt(n); i++) {  // optimization 2
        if(sieve[i] == true) {
            // int j = i*2;
            int j = i*i;  // optimization 1
            // first unmarked number would be i*i, as other have  been marked by  2 to (i-1)
            while(j <= n) {
                sieve[j] = false;
                j += i;
            }
        }
    }

    return sieve;
}

vector<bool> segSieve(int L, int R) {
    // get me prime array, I will use it to mark seg sieve.
    vector<bool> sieve = Sieve(sqrt(R));
    vector<int> basePrimes;
    for(int i=0; i<sieve.size(); i++) {
        if(sieve[i]) {
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R-L+1, true);
    if(L == 1 || R == 0) {
        segSieve[L] = false;
    }

    for(auto prime:basePrimes) {
        int first_mul = (L/prime)*prime;
        if(first_mul < L) {
            first_mul += prime;
        }
        int j = max(first_mul, prime*prime);
        while( j <= R) {
            segSieve[j-L] = false;
            j += prime;
        }
    }

    return segSieve;
}

int main() {
    // vector<bool> sieve = Sieve(25);

    // for(int i=0; i<=25; i++) {
    //     if(sieve[i]) {
    //         cout << i << " ";
    //     }
    // }
    
    int L = 110;
    int R = 130;

    vector<bool> sieve = segSieve(L, R);
    cout << "Primes between " << L << " and " << R <<" is : ";
    for(int i = 0; i < sieve.size(); i++) {
        if(sieve[i]) {
            cout << i+L << " "; 
        }
    }
    cout << endl;

    return 0;
}