#include<iostream>
using namespace std;

bool checkPrime(int num) {
    for(int i=2; i<num; i++) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for(int i=2; i<=n; i++) {
        bool isPrime = checkPrime(i);

        if(isPrime) {
            cout << i <<" ";
        }
    }
    cout << endl;
    return 0;
}