#include<iostream>
using namespace std;
class Solution {
public:
    string decodeMessage(string key, string message) {
        // create mapping

    char start = 'a';
        char mapping[1000] = {0};
        for(auto ch: key) {
            if(ch != ' ' && mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }

        // ans string
        string ans;
        for(auto ch:message) {
            if(ch == ' ') {
                ans.push_back(' ');
            } else {
                ans.push_back(mapping[ch]);
            }
        }

        return ans;
    }
};

int main() {

    return 0;
}