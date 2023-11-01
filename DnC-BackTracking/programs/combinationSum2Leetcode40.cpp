#include<bits/stdc++.h>
using namespace std;

void combinationSum2Helper(vector<int>& arr, int target, vector<int>& temp, vector<vector<int>>& ans, int index) {
    // base case
    if(target < 0) return;
    if(target == 0) {
        ans.push_back(temp);
        return;
    }

    for(int i=index; i<arr.size(); i++) {
        if(i > index && arr[i] == arr[i-1]) continue;
        temp.push_back(arr[i]);
        combinationSum2Helper(arr, target-arr[i], temp, ans, i+1);
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    vector<int> temp;
    vector<vector<int>> ans;
    combinationSum2Helper(arr, target, temp, ans, 0);
    /* set<vector<int>> st;
    for(auto it: ans) {
        st.insert(it);
    }
    ans.clear();
    for(auto it: st) {
        ans.push_back(it);
    } */
    return ans;
}

int main() {
    vector<int> arr = {2,5,1,2};
    int target = 5;
    vector<vector<int>> ans = combinationSum2(arr, target);
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}