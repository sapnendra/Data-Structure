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

// it returns root node of created tree
TreeNode* createTree() {
    cout<< "Enter value for Node : " << endl;
    int data;
    cin >> data;

    if(data == -1) {
        return NULL;
    }

    //step1: create Node
    TreeNode* root = new TreeNode(data);

    // step2: create left subtree
    // cout << "Left of Node : " << root->data << endl;
    root->left = createTree();

    // step3: create right subtree
    // cout << "Right of Node : " << root->data << endl;
    root->right = createTree();

    return root;
}

TreeNode* kthAncestorOfNode(TreeNode* root, TreeNode* targetNode, int k) {
    // base case
    if(root == NULL) {
        return NULL;
    }


    TreeNode* leftAns = kthAncestorOfNode(root->left, targetNode, k);
    TreeNode* rightAns = kthAncestorOfNode(root->right, targetNode, k);

    return NULL;
}

int main() {
    TreeNode* root = createTree();
    TreeNode* targetNode = new TreeNode(80);
    int k = 2;

    TreeNode* kthAncestor = kthAncestorOfNode(root, targetNode, k);
    cout << k << "th Ancestor of " << targetNode->data << " is : " << kthAncestor << endl;
    return 0;
}

// 10 20 40 70 -1 -1 80 90 -1 -1 100 -1 -1 50 -1 -1 30 -1 60 -1 -1