#include<iostream>
#include<climits>
#include<stack>

using namespace std;

int maxDepth(string s) {
    int n = s.length();

    stack<char> st;
    int maxDeep = 0;
    int max = INT_MIN;
    for(int i=0; i<n; i++) {
        char ch = s[i];
        if(ch == '(') {
            st.push(ch);
            maxDeep++;
        }

        else if(ch == ')') {
            st.pop();
            maxDeep--;
        }

        if(maxDeep > max) {
            max = maxDeep;
        } 
    }

    return max;

}

int maxDepth2(string s) {
    int n = s.length();

    int result = INT_MIN;
    int openBracket = 0;
    for(int i=0; i<n; i++) {
        char ch = s[i];

        if(ch == '(') {
            openBracket++;
        }

        else if(ch == ')') {
            openBracket--;
        }

        if(openBracket > result) {
            result = openBracket;
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    cout << maxDepth2(s) << endl;
    return 0;
}