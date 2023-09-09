#include<iostream>
#include<vector>
using namespace std;

double toKelvin(double celcious) {
    double kelvin = celcious + 273.15;
    return kelvin;
}

double tofahrenheit(double celcious) {
    double fehrenheit = ((celcious * 1.8) + 32);
    return fehrenheit;
}

vector<double> makeBundle(double celcious) {
    double k = celcious + 273.15;
    double f = celcious*1.80 + 32.00;

    makeBundle.push_back(k);
    makeBundle.push_back(f);

    return makeBundle;
}

double main() {
    double celcious;
    cin >> celcious;

    double kelvin = toKelvin(celcious);
    double fahrenheit = tofahrenheit(celcious);

    vector<double> vec = makeBundle(celcious);

    cout << "Kelvin: " <<kelvin <<endl;
    cout << "fahrenheit: " <<fahrenheit<<endl;
    return 0;
}