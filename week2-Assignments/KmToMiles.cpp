#include<iostream>
using namespace std;

double changeIntoMiles(int km) {
    double miles = km*0.621371;
    return miles;
}

int main() {
    double km;
    cout <<"Tell me kilometer: ";
    cin >> km;

    double miles = changeIntoMiles(km);
    cout <<"Miles: "<< miles <<endl;
    return 0;
}