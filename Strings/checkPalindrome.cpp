#include<iostream>
using namespace std;

int getLengthOfString(char ch[]) {
    int length = 0;
    int idx = 0;
    while(ch[idx] != '\0') {
        length++;
        idx++;
    }
    return length;
}

bool checkPalindrome(char ch[], int len) {
    int s = 0;
    int e = len-1;
    while(s <= e) {
        if(ch[s] == ch[e]) {
            s++;
            e--;
        }
        else {
            // character are not matching
            return false;
        }
    }
    return true;
}

int main() {
    char ch[100];
    cin >> ch;

    int len = getLengthOfString(ch);
    cout << "Length of the input string: " << len << endl;

    bool flag = checkPalindrome(ch, len);
    if(flag) {
        cout << "Yup! It's a Palindrome String."<< endl;
    } else {
        cout << "Nope! It's not a Palindrome String."<< endl;
    }
    return 0;
}