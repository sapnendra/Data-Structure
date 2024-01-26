#include<iostream>
#include<queue>
#include<map>
#include<vector>
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

void printLeftView(Node* root, int level, vector<int> &leftView) {
    //base case
    if(root == NULL) return;

    if(level == leftView.size()) {
        // It means we found left view node, then store it in vector
        leftView.push_back(root->data);
    }

    // recursion
    printLeftView(root->left, level+1, leftView);
    printLeftView(root->right, level+1, leftView);
}

void printRightView(Node* root, int level, vector<int> &leftView) {
    //base case
    if(root == NULL) return;

    if(level == leftView.size()) {
        // It means we found left view node, then store it in vector
        leftView.push_back(root->data);
    }

    // recursion
    printRightView(root->right, level+1, leftView);
    printRightView(root->left, level+1, leftView);
}

void printTopView(Node* root) {
    map<int, int> hdToNodeMap;
    queue<pair<Node*, int>> q;
    q.push(make_pair(root, 0));

    while(!q.empty()) {
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        // if there is no entry for hd in map then create a new entry
        if(hdToNodeMap.find(hd) == hdToNodeMap.end()) {
            hdToNodeMap[hd] = frontNode->data;
        }

        // look for the child
        if(frontNode->left != NULL) {
            q.push(make_pair(frontNode->left, hd-1));
        }
        if(frontNode->right != NULL) {
            q.push(make_pair(frontNode->right, hd+1));
        }
    }
    cout << "Printing top view : " << endl;
    for(auto it : hdToNodeMap) {
        cout << it.second << " ";
    }
}
void printBottomView(Node* root) {
    map<int, int> hdToNodeMap;
    queue<pair<Node*, int>> q;
    q.push(make_pair(root, 0));

    while(!q.empty()) {
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        // overwrite answers so that the deeper nodes can be stored
        hdToNodeMap[hd] = frontNode->data;

        // look for the child
        if(frontNode->left != NULL) {
            q.push(make_pair(frontNode->left, hd-1));
        }
        if(frontNode->right != NULL) {
            q.push(make_pair(frontNode->right, hd+1));
        }
    }
    cout << "Printing bottom view : " << endl;
    for(auto it : hdToNodeMap) {
        cout << it.second << " ";
    }
}

int main() {
    Node* root = createTree();
    cout << endl;
    levelOrder(root);

    printBottomView(root);

    // int level = 0;
    // vector<int> leftView;
    // vector<int> rightView;
    // printLeftView(root, level, leftView);
    // printRightView(root, level, rightView);

    // cout << "Left View of a Tree : "<< endl;
    // for(auto it: leftView) {
    //     cout << it << " ";
    // }
    // cout << endl;

    // cout << "Right View of a Tree : "<< endl;
    // for(auto it: rightView) {
    //     cout << it << " ";
    // }
    // cout << endl;
    
    return 0;
}

// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1