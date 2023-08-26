#include<iostream>
using namespace std; 

int main() {
    int n;
    cin >> n;

    bool flag = false;
    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            flag = true;
            break;
        }
    }

    if(flag) {
        cout <<"Not Prime"<<endl;
    } else {
        cout <<"Prime"<<endl;
    }
    return 0;;
}