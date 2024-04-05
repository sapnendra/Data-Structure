#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

string makeGood(string s) {
    string result = "";

    for(auto &ch : s) {
        if(ch == result.back()-32 || ch == result.back()+32) {
            // both are small-capital/capital-small equivalent
            result.pop_back();
        } else {
            result.push_back(ch);
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    string goodString = makeGood(s);

    cout << "Good String is : " << goodString << endl;

    return 0;
}