#include<iostream>
using namespace std;

void printName(string name) {
    for(int i=0; i<5; i++) {
        cout << name << endl;
    }
}

int main() {
    printName("Sapnendra");
    printName("Jaiswal");
    return 0;
}