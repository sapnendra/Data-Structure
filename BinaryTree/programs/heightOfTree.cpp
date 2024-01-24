#include<iostream>
#include<queue>
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

int maxDepth(Node* root) {
    // base case
    if(root == NULL) return 0;

    int leftTreeHeight = maxDepth(root->left);
    int rightTreeHeight = maxDepth(root->right);
    int height = max(leftTreeHeight, rightTreeHeight) + 1;

    return height;
}