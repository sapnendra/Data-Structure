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

void inOrder(Node* root) {
    //base case
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root) {
    // base case
    if(root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node* root) {
    //base case
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) q.push(NULL);
        }
        else {
            cout << temp->data << " ";
            if(temp->left != NULL) {
                q.push(temp->left);
            }
            if(temp->right != NULL) {
                q.push(temp->right);
            }
        }
    }
}

void printLeftBoundary(Node* root) {
    // base case
    if(root == NULL) {
        return;
    }
    if(root->left == NULL && root->right == NULL) {
        return;
    }

    cout << root->data << " ";
    if(root->left != NULL) {
        printLeftBoundary(root->left);
    } else {
        printLeftBoundary(root->right);
    }
}

void printLeafBoundary(Node* root) {
    // base case
    if(root == NULL) {
        return;
    }
    if(root->left == NULL && root->right == NULL) {
        cout << root-> data << " ";
    }
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(Node* root) {
    // base case
    if(root == NULL) {
        return;
    }
    if(root->left == NULL && root->right == NULL) {
        return;
    }

    if(root->right != NULL) {
        printRightBoundary(root->right);
    } else {
        printRightBoundary(root->left);
    }
    cout << root->data << " ";
}

void printBoundaryOfTree(Node* root) {
    if(root == NULL)
        return;
    cout << root->data << " ";
    printLeftBoundary(root->left);
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
    printRightBoundary(root->right);
}

int main() {
    Node* root = createTree();
    cout << endl;
    levelOrder(root);

    printBoundaryOfTree(root);
    
    return 0;
}

// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1