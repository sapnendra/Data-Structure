#include<iostream>
#include<vector>
using namespace std;

void printSubArrays_utility(vector<int>& nums, int start, int end) {
    // base case
    if(end == nums.size()) return;

    // one case solution
    for(int i=start; i<=end; i++) {
        cout << nums[i] <<" ";
    }
    cout << endl;
    // recursive solution
    printSubArrays_utility(nums, start, end+1);
}

void printSubArrays(vector<int>& nums) {
    for(int start=0; start<nums.size(); start++) {
        int end = start;
        printSubArrays_utility(nums, start, end);
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    printSubArrays(nums);

    return 0;
}