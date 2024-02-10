#include<iostream>
#include<vector>
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

Node* insertIntoBST(Node *root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    // its not the first node
    if (data > root->data) {
        root->right = insertIntoBST(root->right, data);
    }
    else {
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

void createBST(Node* &root) {
    cout << "Enter Data : ";
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cout << "Enter data : ";
        cin >> data;
    }
}

void levelOrderTraversal(Node *root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else {
            cout << temp->data << " ";
            if (temp->left != NULL) {
                q.push(temp->left);
            }
            if (temp->right != NULL) {
                q.push(temp->right);
            }
        }
    }
}

void storeInorderTraversal(Node* root, vector<int> &inorder) {
    if(root == NULL) {
        return;
    }

    // LNR
    storeInorderTraversal(root->left, inorder);
    inorder.push_back(root->data);
    storeInorderTraversal(root->right, inorder);
}

void replaceUsingPostOrder(Node* root, vector<int> inorder, int &index) {  // Galti karte hai - index ko by reference nhi bhejte
    // base case
    if(root == NULL) {
        return;
    }

    // LRN 
    replaceUsingPostOrder(root->left, inorder, index);
    replaceUsingPostOrder(root->right, inorder, index);

    root->data = inorder[index];
    index++;
}

Node* convertBSTIntoMaxHeap(Node* root) {
    // step1: store inorder
    vector<int> inorder;
    storeInorderTraversal(root, inorder);

    // step2: replace the node values with the stored inorder values, using the postorder traversal
    int index = 0;
    replaceUsingPostOrder(root, inorder, index);
    return root;
}

int main() {
    Node* root = NULL;
    
    createBST(root);
    cout << endl << "Printing BST : " << endl;
    levelOrderTraversal(root);

    cout << endl << "Converting into heap : " << endl;
    root = convertBSTIntoMaxHeap(root);
    cout << "Printing Max-heap : " << endl;
    levelOrderTraversal(root);

    return 0;
}

// Enter Data : 100 50 150 40 60 110 200 20 -1 