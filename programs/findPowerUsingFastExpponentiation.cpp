#include<bits/stdc++.h>
using namespace std;

int fastExponentiation(int a, int b) {
    int ans = 1;

    while(b > 0) {
        if(b & 1) {  // when b is odd number
            ans = ans * a;
        }

        a = a*a;
        b = b>>1;  // b is divided by 2 untill b > 0
    }
    
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = fastExponentiation(a , b);

    cout << "Power of two integer: " << ans << endl;

    return 0;
}

/*
   Time Complexity: O(log b), where b is exponentiation power
   Space Complexity: O(1), No extra space uses
*/