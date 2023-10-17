#include<iostream>
using namespace std;

void findSubSequences(string str, string output, int index) {
    // base case 
    if( index >= str.length()) {
        cout <<"->: "<< output << endl;
        return;
    }

    char ch = str[index];

    // include
    output.push_back(ch);
    findSubSequences(str, output, index+1);

    // ixclude
    output.pop_back();
    findSubSequences(str, output, index+1);


    // // ixclude
    // findSubSequences(str, output, index+1);

    // // include
    // // output string me character ko include kardo
    // // output.push_back(ch);  or
    // findSubSequences(str, output + ch, index+1);
}

int main() {
    string str = "abc";
    int index = 0;
    int n = str.length();

    string output = "";

    findSubSequences(str, output, index);

    return 0;
}