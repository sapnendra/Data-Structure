#include<iostream>
using namespace std;

int getStringLength(char ch[]) {
    int length = 0;
    int i = 0;
    while(ch[i] != '\0') {
        length++;
        i++;
    }
    return length;
}

void convertIntoUppercase(char ch[], int size) {
    int index = 0;
    while(ch[index] != '\0') {
        if(ch[index] >= 'a' && ch[index] <= 'z') {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

int main() {
    char ch[100];

    cin.getline(ch, 100);

    int len = getStringLength(ch);
    cout << "Length of the input string : " << len << endl;

    cout << "Before : " << ch << endl;
    convertIntoUppercase(ch, len);
    cout << "After : " << ch << endl;

    return 0;
}