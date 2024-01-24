#include<iostream>
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
    if(root == NULL) return 0;

    int leftTreeHeight = height(root->left);
    int rightTreeHeight = height(root->right);
    int height = max(leftTreeHeight, rightTreeHeight) + 1;

    return height;
}

int diameterOfBinaryTree(Node* root) {
    // base case
    if(root == NULL) {
        return 0;
    }

    int option1 = diameterOfBinaryTree(root->left);
    int option2 = diameterOfBinaryTree(root->right);
    int option3 = height(root->left) + height(root->right) + 1;
    int diameter = max(option1, max(option2, option3));
}