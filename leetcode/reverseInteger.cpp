#include<iostream>
using namespace std;

int reverseInt(int n) {
    int ans = 0;
    while(n > 0) {
        int rem = n%10;
        ans = (ans*10+rem);
        n = n/10;
    }
    return ans;
}

int main() {
    int num;
    cin >> num;

    int ans = reverseInt(num);
    cout <<"Reverse of "<<num<<" : "<<ans<<endl;
    return 0;
}