#include<iostream>
#include<queue>
using namespace std;

class Node {
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

void levelOrderTraversal(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << root->data << endl;
        if(root->left != NULL) {
            q.push(root->left);
        }
        if(root->right != NULL) {
            q.push(root->right);
        }
    }
}

int main() {    

    return 0;
}