#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryMethod1(int n) {
    // division method
    int binaryNo = 0;
    int i = 0;

    while(n > 0) {
        int remainder = n % 2;
        n = n/2;
        binaryNo = binaryNo+ remainder*pow(10, i++);
    }
    return binaryNo;
}

int decimalToBinaryMethod2(int n) {
    // bitwise method
    int binaryNo = 0;
    int i = 0;

    while(n > 0) {
        int remainder = n & 1;
        binaryNo = binaryNo+ remainder*pow(10, i++);
        n = n >> 1;
    }
    return binaryNo;
}

int binaryToDecimal(int n) {
    int decimal = 0;
    int i = 0;
    while(n > 0) {
        int bit = n % 10;
        decimal = decimal + bit*pow(2,i++);
        n = n/10;
    }
    return decimal;
}

int main() {

    int decimal;
    cout << "Enter decimal number: ";
    cin >> decimal;
    int binaryNo = decimalToBinaryMethod2(decimal);
    cout <<"Binary number of "<< decimal <<" : "<<binaryNo<< endl;

    int binary;
    cout << "Enter binary number: ";
    cin >> binary;
    int decimalNo = binaryToDecimal(binary);
    cout <<"Decimal number of "<< binary <<" : "<<decimalNo<< endl;
    return 0;
}