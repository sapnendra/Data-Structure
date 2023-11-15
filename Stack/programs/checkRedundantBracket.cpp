#include<iostream>
#include<stack>
using namespace std;

class Solution{
public: 
    bool checkRedundantBracket(string str) {
        stack<char> st;
        for(int i=0; i<str.length(); i++) {
            char ch = str[i];
            if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '%') {
                st.push(ch);
            }
            else if(ch == ')') {
                // traverse the stack to count operators
                // and also remove operator from stack
                int operatorCount = 0;
                while(!st.empty() && st.top() != '(') {
                    char temp = st.top();
                    if(temp == '+' || temp == '-' || temp == '*' || temp == '/' || temp == '%') {
                        operatorCount++;
                    }
                    st.pop(); // remove operator
                }

                // Yaha tabhi pahucha hu jab
                // Aapke stack ke top par ek opening bracket present hai
                // remove opening bracket
                st.pop();
                if(operatorCount == 0) {
                    return true;  // Redundant bracket present
                } 
            }
        }

        // Yaha tabhi pahucha hu jab
        // har ek bracket pair ke bich me
        // ek operator pakka mila hoga (operator > 0)
        return false;
    }
};

int main() {
    Solution obj;
    bool flag = obj.checkRedundantBracket("((a+(b*c)))");
    if(flag) {
        cout << "Redundant bracket present,,,/ need to remove -- !" << endl;
    } else {
        cout << "There is no redundant bracket" << endl;
    }
    return 0;
}