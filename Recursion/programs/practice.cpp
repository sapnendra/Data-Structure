#include<iostream>
using namespace std;

long long int factorial(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;

    long long int fact = n * factorial(n-1);
    return fact; 
}

int main() {    

    long long int n;
    cin >> n;
    
    long long int getFact = factorial(n);

    cout << "Factorial of : " << n << " is : " << getFact << endl;

    return 0;   
}