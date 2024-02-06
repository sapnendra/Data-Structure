/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* root, long long int lowerBound, long long int upperBound) {
        if(root == NULL) {
            return true;
        }

        bool condition1 = (root->val > lowerBound);
        bool condition2 = (root->val < upperBound);
        bool leftAns = solve(root->left, lowerBound, root->val);
        bool rightAns = solve(root->right, root->val, upperBound);

        if(condition1 && condition2 && leftAns && rightAns) {
            return true;
        } else {
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        long long int lowerBound = -21474836457;
        long long int upperBound = 21474836457;

        bool ans = solve(root, lowerBound, upperBound);
        return ans;
    }
};