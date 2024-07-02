#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int getWinnerHelper(vector<int>& arr, int k) {
        int max_element = INT_MIN;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > max_element) {
                max_element = arr[i];
            }
        }
        if(k >= arr.size()) {
            return max_element;
        }

        int winner = arr[0];
        int streak = 0;
        for(int i=1; i<=arr.size(); i++) {
            if(arr[i] > winner) {
                winner = arr[i];
                streak = 1;
            } else {
                streak++;
            }
            if(streak == k || winner == max_element) {
                return winner;
            }
        }
        return winner;
    }

    int getWinner(vector<int>& arr, int k) {
        return getWinnerHelper(arr, k);
    }
};

int main() {
    vector<int> arr = {2,1,3,5,4,6,7};
    int k = 2;
    Solution obj;
    obj.getWinner(arr, k);
    return 0;
}