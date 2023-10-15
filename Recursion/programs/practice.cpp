#include<iostream>
using namespace std;

int factorial(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;

    int fact = n * factorial(n-1);
    return fact; 
}

int main() {    

    int n;
    cin >> n;
    
    int getFact = factorial(n);

    cout << "Factorial of : " << n << " is : " << getFact << endl;

    return 0;   
}