#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a+b > c) {
        cout << "Valid triangle" <<endl;
    } 
    else if(b+c > a) {
        cout << "Valid trianlge" << endl;
    }
    else if(c+a > b) {
        cout << "Valid triangle" << endl;
    }
    else {
        cout << "Not a valid triangle" <<endl;
    }
    return 0;
}