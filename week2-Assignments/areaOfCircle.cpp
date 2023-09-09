#include<iostream>
using namespace std;

float areaOfCircle(float radious) {
    float ans = 3.14*radious*radious;
    return ans;
}

int main() {
    float radious;
    cout << "Enter radious of circle: ";
    cin >> radious;

    float ans = areaOfCircle(radious);
    cout << "Area of circle: "<< ans << endl;
}