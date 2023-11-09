#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<char> st;
    string str = "rabbaB";
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        st.push(ch);
    }

    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}