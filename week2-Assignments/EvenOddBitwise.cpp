#include<iostream>
using namespace std;

bool checkEven(int num) {
    if( /*num%2 == 0*/ (num&1) == 0 ) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    cin >> num;

    if(checkEven(num)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}