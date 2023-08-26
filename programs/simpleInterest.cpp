#include<iostream>
using namespace std;

int main() {
    int principle, rate, time;
    cin >> principle >> rate >> time;

    int simpleInterest = (principle*rate*time)/100;
    cout << simpleInterest <<endl;
    return 0;
}