#include<bits/stdc++.h>
using namespace std;

void combinationSumHelper(vector<int>& arr, int target, vector<int>& temp, vector<vector<int>>& ans, int index) {
    // base case
    if(target < 0) return;
    if(target == 0) {
        ans.push_back(temp);
        return;
    }

    for(int i=index; i<arr.size(); i++) {
        temp.push_back(arr[i]);
        combinationSumHelper(arr, target-arr[i], temp, ans, index);
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& arr, int target) {
    vector<int> temp;
    vector<vector<int>> ans;
    combinationSumHelper(arr, target, temp, ans, 0);
    return ans;
}

int main() {
    vector<int> arr = {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(arr, target);
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}