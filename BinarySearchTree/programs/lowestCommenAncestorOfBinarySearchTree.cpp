/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // base case 
        if(root == NULL) {
            return NULL;
        }

        // case 1: both p and q comes in left subtree of root node
        if(p->val < root->val && q->val < root->val) {
            TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
            return leftAns;
        }

        // case 2: both p and q comes in right subtree of root node
        if(p->val > root->val && q->val > root->val) {
            TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);
            return rightAns;
        }

        // because of constraints

        // // case 3: P comes in left subtree and q comes in right subtree of root node
        // if(p->val < root->val && q->val > root->val) {
        //     return root;
        // }

        // // case 4: p comes in right subtree and q comes in left subtree of root node
        // if(p->val > root->val && q->val < root->val) {
        //     return root;
        // }

        return root;
    }
};