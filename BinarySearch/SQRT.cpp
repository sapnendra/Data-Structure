#include<iostream>
using namespace std;

int findSQRT(int num) {
    int start = 1;
    int end = num;
    int ans = -1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(mid*mid == num) {
            return mid;
        } else if(mid*mid < num) {
            // right
            ans = mid;
            start = mid+1;
        } else {
            // left
            end = mid-1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int ans = findSQRT(n);
    cout << "Your answer is: " << ans << endl;
    return 0;
}