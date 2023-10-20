#include<iostream>
using namespace std;

bool checkPalindromeRE(string str, int start, int end) {
    // base case
    if(start > end) return true;

    // one case processing
    if(str[start] != str[end]) {
        return false;
    }

    // recursively call -> next characters can be same or not
    return checkPalindromeRE(str, start+1, end-1);
}

int main() {
    string str;
    cin >> str;

    bool isPalindrome = checkPalindromeRE(str, 0, str.size()-1);
    if(isPalindrome) {
        cout << "Yes, given string is palindrome." << endl;
    } else {
        cout << "No, given string is not palindrome." << endl;
    }
    return 0;
}