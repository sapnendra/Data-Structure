#include<iostream>
using namespace std;

int pow(int n) {
    // base case
    if(n == 0) return 1;

    // base case + function call
    return 2 * pow(n-1);
}

int main() {
    int n;
    cin >> n;

    int power = pow(n);
    cout << "Power of 2 is : " << power << endl;
    return 0;
}