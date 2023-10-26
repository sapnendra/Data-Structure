#include<bits/stdc++.h>
using namespace std;

double eps = 1e-3;

double multiply(double mid, int n) {
    double ans = 1;
    for(int i=0; i<n; i++) {
        ans *= mid;
    }
    return ans;
}

int main() {
    double number;
    int nth;
    cin >> number >> nth;
    double start = 0;
    double end = number;
    double mid;
    while(end-start > eps) {
        mid = (start+end)/2;
        if(multiply(mid, nth) < number) start = mid;
        else end = mid; 
    }
    cout << setprecision(4) << "Your answer is: " << start << endl; // OR  end << endl;
    cout << "Verify your answer: " << pow(number, 1.0/nth) << endl;
    return 0;
}