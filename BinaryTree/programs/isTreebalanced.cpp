#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(Node* root) {
    // base case
    if(root == NULL) return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int finalHeight = max(leftHeight, rightHeight) + 1;
    return finalHeight;
}

bool isBalanced(Node* root) {
    //base case
    if(root == NULL) return true;

    // currNode
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int diff = abs(leftHeight - rightHeight);
    
    bool currNodeAns = (diff <= 1);

    bool leftAns = isBalanced(root->left);
    bool rightAns = isBalanced(root->right);

    if(currNodeAns && leftAns && rightAns) return true;
    else return false;
}

int main() {
    
    return 0;
}