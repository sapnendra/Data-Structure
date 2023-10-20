#include<iostream>
using namespace std;

void reverse(string& str, int start, int end) {
    // base case
    if(start >= end) return;

    // one case processing
    swap(str[start], str[end]);

    // recursive call
    reverse(str, start+1, end-1);
}

int main() {
    string str;
    cin >> str;
    int n = str.size();

    reverse(str, 0, n-1);
    cout << str << endl;

    return 0;
}