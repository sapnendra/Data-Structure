#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> ans;
    deque<int> dq;

    // first window ko processing
    for(int index=0; index<k; index++) {
        int element = nums[index];
        // inside queue remove all smaller element
        while(!dq.empty() && element > nums[dq.back()]) {
            dq.pop_back();
        }
        // now insert inside deque
        dq.push_back(index);
    }

    // remaining window processing
        // store answer
        // removel
        // addition
        
    for(int index=k; index<nums.size(); index++) {
        // store answer
        ans.push_back(nums[dq.front()]);

        // removel -> out of range
        if(index - dq.front() >= k) {
            dq.pop_front();
        }
        // removel -> smaller element
        int element = nums[index];
        while(!dq.empty() && element > nums[dq.back()]) {
            dq.pop_back(); 
        }

        // addition
        dq.push_back(index);
    }

    // last window processing
    ans.push_back(nums[dq.front()]);
    return ans;
}

int main() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;

    vector<int> ans;
    ans = maxSlidingWindow(nums, k);

    for(auto element:ans) {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}