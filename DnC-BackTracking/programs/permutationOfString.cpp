#include<iostream>
using namespace std;

void backTrack(string &str, int index) {
    // base case
    if(index >= str.length()) {
        cout << str << " ";
        return;
    }

    for(int j=index; j<str.length(); j++) {
        swap(str[index], str[j]);
        backTrack(str, index+1);
        swap(str[index], str[j]);
    }
}

int main() {
    string str = "abc";
    int index = 0;
    cout << "Input string: " << str << endl;
    cout << "Permutations: " << endl;
    backTrack(str, index);
    cout << endl;
    return 0;
}