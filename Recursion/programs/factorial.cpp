#include<iostream>
using namespace std;

int getFactorial(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;

    int fact = n * getFactorial(n-1);
    return fact;
}

int main() {
    int n;
    cin >> n;

    int fact = getFactorial(n);
    cout << "Factorial of : " << n << " : " << fact << endl;
    return 0;
}