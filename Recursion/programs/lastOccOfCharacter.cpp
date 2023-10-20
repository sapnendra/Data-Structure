#include<iostream>
using namespace std;

void findLastOccOfCharacterLTR(string str, char ch, int &ansIndex, int index) {
    // base case for recursion
    if(index >= str.size()) return;

    // processing
    if(str[index] == ch) {
        ansIndex = index;
    }

    // recursion call
    findLastOccOfCharacterLTR(str, ch, ansIndex, index+1);
}

void findLastOccOfCharacterRTL(string str, char ch, int &ansIndex, int index) {
    // base case for recursion
    if(index < 0) return;

    // processing
    if(str[index] == ch) {
        ansIndex = index;
        return;
    }

    // recursion call
    findLastOccOfCharacterRTL(str, ch, ansIndex, index-1);
}

int main() {

    string str = "abcbbbgt";
    int n = str.size();
    char ch = 'a';

    int ansIndex = -1;
    findLastOccOfCharacterRTL(str, ch, ansIndex, n-1);
    cout << "Last occurence of " << ch << " is at index: " << ansIndex << endl;

    return 0;
}