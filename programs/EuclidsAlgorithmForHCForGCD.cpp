#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // GCD of two positive integer numbers
    int gcd(int a, int b) {
        if(a == 0) return b;
        if(b == 0) return a;

    while(a != b) {
        if(a > b) {
            a = a-b;
        } else {
            b = b-a;
        }
    }
};

/*
    Time complexity: O(a) when a<b or O(b) when a>b
    Space complexity: O(1), nop extra space will be used
*/