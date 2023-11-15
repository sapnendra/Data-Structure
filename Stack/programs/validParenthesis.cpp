#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> st;
        for(int i=0; i<str.length(); i++) {
            char ch = str[i];
            if(ch == '(' || ch == '{' || ch == '[') {
                // push into stack
                st.push(ch);
            } else {
                if(!st.empty()) {
                    // for closing bracket
                    if(ch == ')' and st.top() == '(') {
                        st.pop();
                    } else if(ch == '}' and st.top() == '{') {
                        st.pop();
                    } else if(ch == ']' and st.top() == '[') {
                        st.pop();
                    } else {
                        // no matching found
                        return false;
                    }
                } else {  // Hidden testcases
                    /* 
                    Single element string jo only ek
                    close bracket '}', ']', ')' contain karta ho
                    jiska mtlb hamesha invalid parenthesis honge
                    */
                   return false;
                }
            }
        }
        if(st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};