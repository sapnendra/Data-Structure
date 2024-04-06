#include<iostream>
#include<stack>
#include<unordered_set>
#include<algorithm>
using namespace std;

string getValidString(string s) {
    if(s.empty()) return "";

    int n = s.length();
    stack<int> st;
    unordered_set<int> remove_idx;

    for(int i=0; i<n; i++) {
        if(s[i] == '(') {
            st.push(i);
        } else if(s[i] == ')') {
            if(st.empty()) {
                remove_idx.insert(i);
            } else {
                st.pop();
            }
        }
    }
    // if only open brackets "((("
    while(!st.empty()) {
        remove_idx.insert(st.top());
        st.pop();
    }

    string result = "";
    for(int i=0; i<n; i++) {
        if(remove_idx.find(i) == remove_idx.end()) {
            result.push_back(s[i]);
        }
    }

    return result;
}

// Approach 2
// Iterate left to right -> Eliminate extra close bracket
// Iterate right to left -> Eliminate extra open bracket
string getValidString2(string s) {
    if(s.empty()) return "";

    int n = s.length();

    string result = "";
    // Iterate left to right -> Eliminate extra close bracket
    int open = 0;
    for(int i=0; i<n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            result.push_back(s[i]);
        } else if(s[i] == '(') {
            open++;
            result.push_back(s[i]);
        } else if(open > 0) {
            open--;
            result.push_back(s[i]);
        }
    }

    string finalResult = "";
    // Iterate right to left -> Eliminate extra open bracket
    int close = 0;
    for(int i=result.length()-1; i>=0; i--) {
        if(result[i] >= 'a' && result[i] <= 'z') {
            finalResult.push_back(result[i]);
        } else if(result[i] == ')') {
            close++;
            finalResult.push_back(result[i]);
        } else if(close > 0) {
            close--;
            finalResult.push_back(result[i]);
        }
    }
    reverse(begin(finalResult), end(finalResult));
    return finalResult;
}

int main() {
    string s;
    cin >> s;

    string ans = getValidString2(s);
    cout << "Valid string is : " << ans << endl;
}