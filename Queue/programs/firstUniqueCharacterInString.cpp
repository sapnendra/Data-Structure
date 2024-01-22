#include<iostream>
#include<queue>
using namespace std;

int main() {
    string str = "ababc";
    queue<char> q;
    int freq[26] = {0};

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        freq[ch-'a']++;
        q.push(ch);

        // find answer
        while(!q.empty()) {
            char frontCharacter = q.front();
            if(freq[frontCharacter-'a'] > 1) {
                // it means this is not an answer
                q.pop();
            } else {
                // particular character not repeating -> means this is the answer
                cout << frontCharacter << "->";
                break;
            }
        }

        if(q.empty()) {
            // answer not found - no unique character
            cout << "#" << "->";   
        }
    }
    return 0;
}