#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void mergeInPlace(vector<int>&nums, int start, int mid, int end) {
        int totalSize = end - start + 1;
        int gap = (totalSize/2) + (totalSize%2);
        while(gap > 0) {
            int i = start, j = start + gap;
            while(j <= end) {
                if(nums[i] > nums[j]) swap(nums[i++], nums[j++]);
            }
            gap = gap <= 1 ? 0 : (gap/2) + (gap%2);
        }
    }

    void mergeSort(vector<int>&nums, int start, int end) {
        if(start >= end) return;
        int mid = start + (end-start)/2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid+1, end);
        mergeInPlace(nums, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp(nums.size(), 0);
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};

int main() {

    return 0;
}