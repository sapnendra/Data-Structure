#include<iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i=n; i>0; i--) {
        fact = fact*i;
    }
    return fact;
}

int main() {
    int num;
    cin >> num;

    int ans = factorial(num);
    cout <<"Factorial of "<<num<<" : "<<ans<<endl;
    return 0;
}