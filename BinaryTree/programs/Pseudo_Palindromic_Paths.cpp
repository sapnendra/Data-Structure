#include<iostream>
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

int result = 0;
void solve(Node* root, vector<int>& count) {
    // base case
    if(root == NULL) return;

    count[root->data]++;
    if(root->left == NULL && root->right == NULL) {//leaf node
        int oddFreq = 0;
        for(int i=1; i<=9; i++) {
            if(count[i]%2 != 0) {  // odd
                oddFreq++;
            }
        }
        if(oddFreq <= 1) {
            result += 1;
        }
    }
    solve(root->left, count);
    solve(root->right, count);
    count[root->data]--;
}

int pseudoPalindromicPaths(Node* root) {
    vector<int> count(10, 0);

    solve(root, count);
    return result;
}

int main() {

    return 0;
}