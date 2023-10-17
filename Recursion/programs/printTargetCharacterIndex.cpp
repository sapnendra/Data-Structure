#include<bits/stdc++.h>
using namespace std;

void printAllOccOfACharacter(char ch[], int n, int index, char targetChar, vector<int>& ans) {
    // base case
    if(index >= n) return;

    // processing
    if(ch[index] == targetChar) {
        ans.push_back(index);
    }

    // recursive call
    printAllOccOfACharacter(ch, n, index+1, targetChar, ans);

}

int main() {
    char ch[] = "Babbar";
    int n = sizeof(ch)/sizeof(ch[0]);
    int index = 0;
    vector<int> ans;

    char targetChar = 'a';
    printAllOccOfACharacter(ch, n, index, targetChar, ans);

    for(auto num: ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}