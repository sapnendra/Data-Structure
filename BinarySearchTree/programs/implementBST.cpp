#include<iostream>
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

Node* createBST() {
    cout << "Enter Data : " << endl;
    int data;
    cin >> data;

    while(data != -1) {
         
    }
}

int main() {

    return 0;
}