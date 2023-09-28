#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:

    static string str;
    static bool compare(char ch1, char ch2) {
        // if this will return true, if position of character1 in string
        // is less than the position of character2 in str string
        
        // when true is returned, then char1 will be 
        // placed  before char2 in output string
        return (str.find(ch1) < str.find(ch2));
    }

    string customSortString(string order, string s) {
        // custom comparator
        str = order;
        sort(s.begin(), s.end(), compare);
        return s;
    }
};

string Solution::str;

int main() {[

    return 0;
]}