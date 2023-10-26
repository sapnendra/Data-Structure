#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int MOD = 1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();
        sort(begin(arr), end(arr));

        unordered_map<int, long long> mp;
        mp[arr[0]] = 1;

        for(int i=0; i<n; i++) {
            int root = arr[i];
            mp[root] = 1;

            for(int j=0; j<i; j++) {
                int leftChild = arr[j];
                // rightChild = arr[i]/leftChild
                if(root%leftChild == 0 && mp.find(arr[i]/leftChild) != mp.end()) {
                    mp[root] += mp[leftChild] * mp[arr[i]/leftChild];
                }
            }
        }
        long result = 0;
        for(auto &it : mp) {
            // it.first = value
            // it.second = ways
            result = (result + it.second) % MOD;
        }

        return result;
    }
};