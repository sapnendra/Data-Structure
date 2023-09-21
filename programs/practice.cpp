#include <iostream>
#include<vector>
using namespace std;


int main() {
    int a = 2;
    
    if(a&1) {
        cout << "This is a odd number" << endl;
    } else {
        cout << "This is a even number" << endl;
    }
    return 0;
}