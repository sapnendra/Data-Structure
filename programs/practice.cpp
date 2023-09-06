#include<iostream>
using namespace std;

void isEven(int num) {
    if((num ^ 1) == (num + 1)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int main() {

    int num;
    cin >> num;
    isEven(num);
    return 0;
}