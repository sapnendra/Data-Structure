#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isMatchHelper(string& s, int si, string& p, int pi){
        // base case
        if(si == s.size() && pi == p.size()) return true;

        // case - if s is empty and p have all '*'
        if(si == s.size() && pi < p.size()) {
            while(pi < p.size()) {
                if(p[pi] != '*') return false;
            }
            return true;
        }


        // processing and recursion
        // single character matching
        if((p[pi] == s[si]) || p[pi] == '?') {
            // match
            return isMatchHelper(s, si+1, p, pi+1);
        }

        if(p[pi] == '*') {
            //case1 treat '*' as empty or null
            bool case1 = isMatchHelper(s, si, p, pi+1);

            // let '*' consume one character
            bool case2 = isMatchHelper(s, si+1, p, pi);

            return case1 || case2;
        }
        // pattern string p doesn't match with string s
        return false;
    }

    bool isMatch(string s, string p) {
        int si = 0; // pointer index for string s
        int pi = 0; // pointer index for string p
        return isMatchHelper(s, si, p, pi);
    }
};

int main() {
    Solution obj;
    bool flag = obj.isMatch("aa", "a?");
    if(flag) cout << "Yes, Strings are matching"<< endl;
    else cout << "No, String doen't match" << endl;
    return 0;
}