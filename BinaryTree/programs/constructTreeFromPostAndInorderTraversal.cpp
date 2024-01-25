#include<iostream>
#include<queue>
#include<map>
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

int searchInorder(int inOrder[], int size, int element) {
    for(int i=0; i<size; i++) {
        if(inOrder[i] == element){
            return i;
        }
    }
    return -1;
}

void createMapping(int inOrder[], int size, map<int,int> &valueToIndexMap) {
    for(int i=0; i<size; i++) {
        int element = inOrder[i];
        int index = i;
        valueToIndexMap[element] = index;
    }
}

Node* constructTreeFromPostAnsInorderTraversal(map<int,int> &valueToIndexMap, int postOrder[], int inOrder[], int &postIndex, int inOrderStart, int inOrderEnd, int size) {
    // base case
    if(postIndex < 0 || inOrderStart > inOrderEnd) {
        return NULL;
    }

    // one case solution
    int element = postOrder[postIndex];
    postIndex--;
    Node* root = new Node(element);
    // search this element in inOrder Array
    int position = valueToIndexMap[element];

    // recursion will handle other case
    root->right = constructTreeFromPostAnsInorderTraversal(valueToIndexMap, postOrder, inOrder, postIndex, position+1, inOrderEnd, size);
    root->left = constructTreeFromPostAnsInorderTraversal(valueToIndexMap, postOrder, inOrder, postIndex, inOrderStart, position-1, size);

    return root;
}

int main() {
    // int preOrder[] = {2, 8, 10, 6, 4, 12};
    // int inOrder[] = {10, 8, 6, 2, 4, 12};
    // int size = 6;
    // int preIndex = 0;
    // int inOrderStart = 0;
    // int inOrderEnd = size-1;
    // map<int,int> valueToIndexMap;
    // createMapping(inOrder, size, valueToIndexMap);

    int inOrder[] = {8, 14, 6, 2, 10, 4};
    int postOrder[] = {8, 6, 14, 4, 10, 2};
    int size = 6;
    int postIndex = size-1;
    int inOrderStart = 0;
    int inOrderEnd = size-1;
    map<int,int> valueToIndexMap;
    createMapping(inOrder, size, valueToIndexMap);

    Node* root = constructTreeFromPostAnsInorderTraversal(valueToIndexMap, postOrder, inOrder, postIndex, inOrderStart, inOrderEnd, size);
    cout << "Printing the entire tree :"<< endl;
    levelOrderTraversal(root);

    return 0;
}