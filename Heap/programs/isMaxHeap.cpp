#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

bool solve(Node *root) {
    // base case
    if (root == NULL) {
        bool p = true;
        return p;
    }
    if (root->left == NULL && root->right == NULL) {
        // leaf node
        return true;
    }

    bool leftAns = solve(root->left);
    bool rightAns = solve(root->right);

    if (leftAns && rightAns) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    
    return 0;
}