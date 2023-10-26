#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor) {
    int start = 0;
    int end = dividend;
    int ans = -1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(mid*divisor == dividend) {
            // return quotient
            return mid;
        }
        else if(mid*divisor > dividend) {
            // go to left side to get possible quotient
            end = mid-1;
        }
        else {
            // store possible quotient in answer and go to left for the nearest quotient
            ans = mid;
            start = mid+1;
        }
    }
    return ans;
}

int main() {    
    int dividend, divisor;
    cin >> dividend >> divisor;

    int ans = getQuotient(dividend, divisor);

    cout << "Answer : " << ans << endl;

    return 0;
}