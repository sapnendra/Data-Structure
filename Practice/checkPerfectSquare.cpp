#include<iostream>
using namespace std;

bool checkPerfectSquare(int n) {
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    while(s <= e) {
        int square = mid*mid;
        if(square == n) {
            return true;
        } else if(square > n) {
            e = mid-1;
        } else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    bool flag = checkPerfectSquare(n);
    if(flag) 
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
    return 0;
}