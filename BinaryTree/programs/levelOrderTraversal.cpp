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

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    // initial
    q.push(root);
    q.push(NULL);

    // start traversal main logic is here
    while(!q.empty()) {
        Node* front = q.front();
        q.pop();
        
        if(front == NULL) {
            // NULL case
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        } 
        else {
            // valid case
            cout << front->data << " ";
            if(front->left != NULL) {
                q.push(front->left);
            }
            if(front->right != NULL) {
                q.push(front->right);
            }
        }
    }
}

int main() {
    Node* root = createTree();
    
    cout << "Level Order Traversal : "<< endl;
    levelOrderTraversal(root);
    
    return 0;
}

// 10 20 40 -1 -1 -1 30 50 -1 -1 60 -1 -1