#include<iostream>
#include<stack>
#include<unordered_set>
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

int main() {
    string s;
    cin >> s;

    string ans = getValidString(s);
    cout << "Valid string is : " << ans << endl;
}