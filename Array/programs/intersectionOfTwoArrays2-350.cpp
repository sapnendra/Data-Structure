#include<iostream>
#include<vector>
using namespace std;

vector<int> findIntersection(vector<int> nums1, vector<int> nums2) {
    vector<int> result;
    for(int i=0; i<nums1.size(); i++) {
        for(int j=0; j<nums2.size(); j++) {
            if(nums1[i] == nums2[j]) {
                result.push_back(nums1[i]);
                nums2[j] = -1;
                j = nums2.size()-1;
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> intersection = findIntersection(nums1, nums2);
    for(auto it : intersection) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}