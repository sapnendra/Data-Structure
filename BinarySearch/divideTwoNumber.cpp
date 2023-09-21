#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor) {
    int s = 0;
    int e = dividend;
    int mid = s + (e-s)/2;

    int ans = -1;
    while(s <= e) {
        if(mid * divisor == dividend) {
            return mid;
        } else if(mid * divisor < dividend) {
            // ans store
            ans = mid;

            // right me jao
            s = mid + 1;
        } else {
            
            // left me jao
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int main() {

    int dividend = -35;
    int divisor = -4;

    int ans = getQuotient(abs(dividend), abs(divisor));

    // now we need to dicide ke kon sa sign lagaye positive ya negative
    if(dividend < 0 && divisor > 0 || divisor < 0 && dividend > 0) {
        ans = 0 - ans;
    }
    cout << "Final ans is: " << ans << endl;
    return 0;
}