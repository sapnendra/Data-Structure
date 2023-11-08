#include<bits/stdc++.h>
using namespace std;

class Node{
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
    ~Node() {
        cout << "Distructor called for: " << this->data << endl;
    }
};

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode; 
    }
}

Node* findMid(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

Node* merge(Node* left, Node* right) {

    if(left == NULL) return right;
    if(right == NULL) return left;

    Node* dummyNode = new Node(-1);
    Node* dummyNodePtr = dummyNode;
    while(left != NULL && right != NULL) {
        if(left->data < right->data) {
            dummyNodePtr = left;
            left = left->next;
        } else {
            dummyNodePtr = right;
            right = right->next;
        }
        dummyNodePtr = dummyNodePtr->next;
    }

    while(left != NULL) {
        dummyNodePtr = left;
        left = left->next;
        dummyNodePtr = dummyNodePtr->next;
    }
    
    while(right != NULL) {
        dummyNodePtr = right;
        right = right->next;
        dummyNodePtr = dummyNodePtr->next;
    }

    return dummyNode->next;
}

Node* sortList(Node* &head) {
    if(head == NULL || head->next == NULL)
        return head;

    Node* mid = findMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    left = sortList(left);    
    right = sortList(right);

    Node* result = merge(left, right);
    return result;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    cout << "Enter the number of data in list: ";
    cin >> n;
    cout << "Enter data: " << endl;
    for(int i=0; i<n; i++) {
        int data;
        cin >> data;
        insertAtTail(head, tail, data);
    }
    cout << "Your List: " << endl;
    Node* sortedListHead = sortList(head);
    print(sortedListHead);
    return 0;
}