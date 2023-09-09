#include<iostream>
using namespace std;

void incrementBy1(int& n) {
    n++;
}

int main() {
    int n;
    cin >> n;
    cout << "before increment n: "<< n << endl;
    incrementBy1(n);
    cout << "after increment n: " << n << endl;

    // int& num = n;
    // int& c = num;
    // int& number = c;

    // cout << "n: " << n << endl;
    // cout << "num: " << num << endl;
    // cout << "c: " << c << endl;
    // cout << "number: " << number << endl;

    // c++;

    // cout << "n: " << n << endl;
    // cout << "num: " << num << endl;
    // cout << "c: " << c << endl;
    // cout << "number: " << number << endl;    

    return 0;
}