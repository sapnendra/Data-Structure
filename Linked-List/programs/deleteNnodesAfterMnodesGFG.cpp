#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->next = NULL;
    }

    Node(int data) {
        this->next = NULL;
        this->data = data;
    }
};

class Solution {
public:
    void linkDelete(Node* head, int m, int n) {
        if(head == NULL) return;
        Node* temp = head;
        for(int i=0; i<m-1; i++) {
            // if m nodes are not available
            if(temp == NULL) return;
            temp = temp->next;
        }
        // if temp would be at Mth node
        if(!temp) return;

        Node* MthNode = temp;
        temp = MthNode->next;
        for(int i=0; i<n; i++) {
            if(!temp) break;
            Node* tempNode = temp->next;
            delete temp;
            temp = tempNode;
        }
        MthNode->next = temp;
        linkDelete(temp, m, n);
    }
};