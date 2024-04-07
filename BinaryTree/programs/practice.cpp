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

Node* createTree() {
    cout << "Enter node data : ";
    int data;
    cin >> data;

    if(data == -1) return NULL;

    Node* root = new Node(data);

    cout << "Enter left node for - " << root->data << endl ;
    root->left = createTree();
    cout << "Enter right node for - " << root->data << endl ;
    root->right = createTree();

    return root;
}

void preOrder(Node* root) {
    //base case
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    // base case
    if(root == NULL) return NULL;
    if(root->data == p->data) return p;
    if(root->data == q->data) return q;

    // one case
    Node* leftAns = lowestCommonAncestor(root->left, p, q);
    Node* rightAns = lowestCommonAncestor(root->right, p, q);

    if(leftAns != NULL && rightAns != NULL) {
        return root;
    }
    else if(leftAns != NULL && rightAns == NULL) {
        return leftAns;
    }
    else if(leftAns == NULL && rightAns != NULL) {
        return rightAns;
    }
    else return NULL;
}

// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1