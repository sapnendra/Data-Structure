#include<iostream>
using namespace std;

string lowerToUpper(string s) {
    
    int indx = 0;
    int i = 1;
    while(i < s.size()) {
        if(s[indx] == s[i]) {
            s[indx] = s[indx] - 'a' + 'A';
            indx = indx + 2;
            i = i + 2;
        } else {
            indx++;
            i++;
        }
    }

    return s;
}

int main() {
    string str = "geeksforgeeks";
    cout << lowerToUpper(str) << endl;
    return 0;
}