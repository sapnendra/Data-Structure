#include<iostream>
using namespace std;

int createNumber(int n) {
    int number = 0;
    for(int i=0; i<n; i++) {
        cout <<"Enter digits: ";
        int num;
        cin >> num;
        number = number*10 + num;
        cout << "Number created so far: " <<number<<endl;
    }
    return number;
}

int main() {
    int n;
    cout <<"Enter number of digits: ";
    cin >> n;
    int number = createNumber(n);
    cout <<"This is a number created by you: "<< number << endl;
    return 0;
}