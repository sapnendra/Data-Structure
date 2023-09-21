#include<iostream>
#include<vector>
using namespace std;

int findPivotIndex(vector<int> nums) {
    int n = nums.size();
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        // corner case
        if(s == e) {
            return s;
        }
        if(nums[mid] >= nums[mid+1] && mid+1 < n) {
            return mid;
        }
        else if(nums[mid] <= nums[mid-1] && mid-1 >= 0) {
            return mid-1;
        }
        else if(nums[mid] >= nums[0]) {
            e = mid-1;
        } else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int binarySearch(vector<int> nums, int s, int e, int target) {
    int mid = s + (e-s)/2;
    int n = nums.size();

    while(s <= e) {
        if(target == nums[mid]) {
            return mid;
        }
        else if(target < nums[mid]) {
            e = mid-1;
        } else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main() {
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);

    int target = 3;
    int ans = -1;

    int pivotIndex = findPivotIndex(nums);
    int n = nums.size();
    if( target >= nums[0] && target <= nums[pivotIndex] ) {
        ans = binarySearch(nums, 0, pivotIndex, target);
    }
    else {
        ans = binarySearch(nums, pivotIndex+1, n-1, target);
    }

    cout <<"Target found at index: "<< ans << endl;
    return 0;
}