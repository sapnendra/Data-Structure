#include<iostream>
#include<stack>
using namespace std;

bool check_RedundantBracket(string str) {
    stack<char> st;

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if(ch == ')'){
            int operator_count = 0;
            while(!st.empty() && st.top() != '(') {
                char temp = st.top();
                if(temp == '+' || temp == '-' || temp == '*' || temp == '/') {
                    operator_count++;
                }
                st.pop();
            }
            st.pop();
            if(operator_count == 0) {
                return true;
            }
        }
    }
    /*
    agar main yaha tk pahucha hu
    iska matlab k har ek bracket k pair k bich me 
    ek operator pakka mila hoga
    */
    return false;
}

int main() {
    string str = "(((a+b)*(c+d)))";
    bool ans = check_RedundantBracket(str);
    if(ans == true) {
        cout << "Redundant bracket present" << endl;
    }
    else {
        cout << "Redundant bracket not present" << endl;
    }
    return 0;
}