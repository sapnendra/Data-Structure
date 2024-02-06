#include<iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// max value
Node* findMaxValueNode(Node* root) {
    if(root == NULL) {
        return NULL;
    }
    Node* temp = root;

    while(temp->right != NULL) {
        temp = temp->right;
    }

    return temp;
}

void levelOrderTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}



Node* createBSTFromInorder(int inorder[], int start, int end) {
    if(start > end) {
        return NULL;
    }

    // we neew to solve only one case
    int mid = (start + end)/2;
    int element = inorder[mid];
    Node* root = new Node(element);

    // and other recursion will handle it
    root->left = createBSTFromInorder(inorder, start, mid-1);
    root->right = createBSTFromInorder(inorder, mid+1, end);

    return root;
}

Node* deleteFromBST(Node* root, int target) {
    // find the target node
    // and delete the target

    if(root == NULL) {
        return  NULL;
    }

    if(target == root->data) {
        // target found delete now
        // 4 cases

        // 1st case -> leaf node
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        else if(root->left != NULL && root->right == NULL) {
            // 2nd case -> right non-NULL and right NULL 
            Node* childSubtree = root->left;
            delete root;
            return childSubtree;
        }
        else if(root->left == NULL && root->right != NULL) {
            // 3rd case -> left NULL and right  non-NULL
            Node* childSubtree = root->right;
            delete root;
            return childSubtree;
        }
        else {
            // 4rt case -> left non-NULL and right non-NULL

            // step1 : bring maximum node from left
            Node* leftMaxi = findMaxValueNode(root->left);
            // step2 : replacement
            root->data = leftMaxi->data;
            // step3 : delete leftMaxi node 
            root->left = deleteFromBST(root->left, leftMaxi->data);
            return root;
        }
    }
    else if(target < root->data) {
        // go to left size of the root
        root->left = deleteFromBST(root->left, target);
    } else {
        // go to right side of the root
        root->right = deleteFromBST(root->right, target);
    }

    return root;
}

int main() {
    int inorder[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 65, 70, 75, 80};
    int start = 0;
    int end = sizeof(inorder)/sizeof(int) - 1;

    Node* root = createBSTFromInorder(inorder, start, end);

    cout << "Printing level order traversal : "<< endl;
    levelOrderTraversal(root);

    int target;
    cout << "Enter the value of target : ";
    cin >> target;

    while(target != -1) {
        root = deleteFromBST(root, target);
        cout << endl <<"Printing level order traversal"<< endl;
        levelOrderTraversal(root);

        cout << "Enter the value of target : ";
        cin >> target;
    }

    return 0;
}