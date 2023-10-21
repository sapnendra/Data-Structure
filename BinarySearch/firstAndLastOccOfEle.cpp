#include<iostream>
#include<vector>
using namespace std;

int getFirstOccurence(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size()-1;
    int ans = -1;

    int mid = start + (end-start)/2;

    while(start <= end) {
        if(target == nums[mid]) {
            ans = mid;
            // left me jao
            end = mid-1;
        } else if(target > nums[mid]) {
            // right me jao
            start = mid+1;
        } else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int getLastOccurence(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size()-1;
    int ans = -1;

    int mid = start + (end-start)/2;

    while(start <= end) {
        if(target == nums[mid]) {
            ans = mid;
            // left me jao
            start = mid+1;
        } else if(target > nums[mid]) {
            // right me jao
            start = mid+1;
        } else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int firstOcc = getFirstOccurence(nums, target);

    // this, below line of code sometimes will save your log(n) time
    if(firstOcc == -1) return {-1, -1};
    else {
        int lastOcc = getLastOccurence(nums, target);
        return {firstOcc, lastOcc};
    }
}

int main() {
    vector<int> nums = {5,7,7,8,8,8,8,8,10};
    int target = 8;
    vector<int> ans = searchRange(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}