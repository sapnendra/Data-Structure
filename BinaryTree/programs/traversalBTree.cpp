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

// it returns root node of created tree
Node* createTree() {
    // cout<< "Enter value for Node : " << endl;
    int data;
    cin >> data;

    if(data == -1) {
        return NULL;
    }

    //step1: create Node
    Node* root = new Node(data);

    // step2: create left subtree
    // cout << "Left of Node : " << root->data << endl;
    root->left = createTree();

    // step3: create right subtree
    // cout << "Right of Node : " << root->data << endl;
    root->right = createTree();

    return root;
}

// traversal of Tree
void preOrderTraversal(Node* root) {
    // base case
    if(root == NULL) return;

    // current node printing
    cout << root->data << " ";

    // left subtree processing
    preOrderTraversal(root->left);

    // right subtree processing
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root) {
    // base case
    if(root == NULL) return;
    
    // left subtree processing
    inOrderTraversal(root->left);

    // current node printing
    cout << root->data << " ";

    // right subtree processing
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root) {
    // base case
    if(root == NULL) return;

    // left subtree processing
    postOrderTraversal(root->left);

    // right subtree processing
    postOrderTraversal(root->right);

    // current node printing
    cout << root->data << " ";
}

int main() {
    Node* root = createTree();
    
    cout << "Pre-Order Traversal of tree : " << endl;
    preOrderTraversal(root);

    cout << endl << "In-Order Traversal of tree : " << endl;
    inOrderTraversal(root);

    cout << endl << "Post-Order Traversal of tree : " << endl;
    postOrderTraversal(root);
    return 0;
}

// 10 20 40 -1 -1 -1 30 50 -1 -1 60 -1 -1