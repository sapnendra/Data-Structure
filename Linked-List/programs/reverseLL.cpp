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
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void firdLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    cout << "Length of the list: " << count << endl;
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(head == NULL){
        // empty LL - means head and tail both are pintng to the same node
        // step1 : create a new node
        Node* newNode = new Node(data);
        // step2 : attach newNode to head
        head = newNode;
        tail = newNode; // attaching tail to newNode
    } else {
        // non-empty LL
        // step1 = create a new node
        Node* newNode = new Node(data);
        // step2 = attach newNode to tail node
        tail->next = newNode;
        // step3 = update tail
        tail = newNode;
    }
}

void reverseLL(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    for(int i=0; i<5; i++) {
        int data;
        cin >> data;
        insertAtTail(head, tail, data);
    }
    cout << "Before reverse operation: "<< endl;
    print(head);

    reverseLL(head);
    cout << "After reverse operation: "<< endl;
    print(head);
    return 0;
}