#include<bits/stdc++.h>
using namespace std;

string removeAllAdjacent(string str) {
    string temp = "";
    int i = 0;
    while(i < str.length()) {
        if(str.length()-1 > 0 && temp[temp.size()-1] == str[i]) {
            temp.pop_back();
        } else {
            temp.push_back(str[i]);
        }
        i++;
    }
    return temp;
}

int main() {
    string str = "abbaca";
    string ans = removeAllAdjacent(str);
    cout << ans << endl;
}