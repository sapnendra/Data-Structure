#include<iostream>
#include<stack>
using namespace std;

int main() {
    string str;
    cin >> str;

    stack<char> st;
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            // stack empty case
            if(!st.empty()) {
                if(ch == ')' && st.top() == '(') {
                    st.pop();
                } else if(ch == '}' && st.top() == '{') {
                    st.pop();
                } else if(ch == ']' && st.top() == '[') {
                    st.pop();
                } else {
                    // no match
                    break;
                }
            } else {
                // no mtach
                break;
            }
        }
    }
    if(st.size() == 0) {
        cout << "Valid parenthesis" << endl;
    } else {
        cout << "Not a valid parenthesis" << endl;
    }
    return 0;
}