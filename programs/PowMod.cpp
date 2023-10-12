#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int PowMod(int x, int n, int m) {
        long long int ans = 1;
        while( n > 0) {
            if( n&1 ) {
                // n is odd 
                ans = (ans*x)%m;
            }

            x = (x*x) % m;
            n = n>>1;
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int x, n, m;
        cin >> x >> n >> m;

        Solution ob;
        long long int ans = ob.PowMod(x, n, m);
        cout << ans << endl;
    }
return 0;
}