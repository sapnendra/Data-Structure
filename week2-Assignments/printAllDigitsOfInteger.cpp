#include<iostream>
using namespace std;

void printDigits(int num) {
    cout << "Your digits: ";
    while(num > 0) {
        int digits = num%10;
        cout <<digits<<" ";
        num = num/10;
    }
    cout <<endl;
}

int main() {
    int n;
    cout <<"Enter number to see it's digits: ";
    cin >> n;
    printDigits(n);
    return 0;
}