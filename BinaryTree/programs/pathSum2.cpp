#include<iostream>
#include<vector>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void solve(TreeNode* root, int targetSum, vector<vector<int>> &ans, vector<int> temp, int sum) {
    //base case
    if(root == NULL) return;
    
    // we can solve for one node
    sum += root->data;
    temp.push_back(root->data);

    if(root->left == NULL && root->right == NULL) {
        // I am standing at a leaf node
        if(sum == targetSum) {
            ans.push_back(temp);
        } else {
            return;
        }
    }
    // recursion will handle all other nodes
    solve(root->left, targetSum, ans, temp, sum);
    solve(root->right, targetSum, ans, temp, sum);
}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    int sum = 0;
    vector<vector<int>> ans;
    vector<int> temp;
    solve(root, targetSum, ans, temp, sum);
    return ans;
}