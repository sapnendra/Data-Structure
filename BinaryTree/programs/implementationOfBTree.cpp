#include<iostream>
#include<vector>
#include<stack>

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
    cout<< "Enter value for Node : " << endl;
    int data;
    cin >> data;

    if(data == -1) {
        return NULL;
    }

    //step1: create Node
    Node* root = new Node(data);

    // step2: create left subtree
    cout << "Left of Node : " << root->data << endl;
    root->left = createTree();

    // step3: create right subtree
    cout << "Right of Node : " << root->data << endl;
    root->right = createTree();

    return root;
}

int main() {
    Node* root = createTree();
    cout << root->data << endl;
    return 0;
}