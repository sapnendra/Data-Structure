class Solution {
public:
    int dp[501][501][2];
    int help(int i, int j, vector<int>& v1, vector<int>& v2, int l) {
        if(i == v1.size() || j == v2.size()) {
            if(l == 1) return 0;
            else return -1;
        }
        if(dp[i][j][l] != INT_MIN) return dp[i][j][l];
        else {
            int op1 = v1[i]*v2[j] + help(i+1, j+1, v1, v2, 1);
            int op2 = help(i+1, j, v1, v2, l);
            int op3 = help(i, j+1, v1, v2, l);
            return dp[i][j][l] = max(op1, max(op2, op3));
        }
    }
    int maxDotProduct(vector<int>& v1, vector<int>& v2) {
        for(int i=0; i<v1.size(); i++) {
            for(int j=0; j<v2.size(); j++) {
                dp[i][j][0] = INT_MIN;
                dp[i][j][1] = INT_MIN;
            }
        }

        int ans = help(0, 0, v1, v2, 0);
        if(ans == -1) {
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            return max(v1.front()*v2.back(), v2.front()*v1.back());
        } else {
            return ans;
        }
    }
};