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

void replaceCharacter(char ch[], int size) {
    int index = 0;
    while(ch[index] != '\0') {
        if(ch[index] == '@') {
            // insert space
            ch[index] = ' ';
        }
        index++;
    }
}

int main() {
    char ch[100];

    cin >> ch;

    int len = getLengthOfString(ch);
    cout << "Length of the input string: " << len << endl;
    
    cout << "Before: " << ch << endl;
    replaceCharacter(ch, len);
    cout << "After: " << ch << endl;

    return 0;
}