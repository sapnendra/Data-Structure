#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node() {
        this->next=NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int findLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
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

void insertAtPosition(Node* &head, int data, int position) {
    int length = findLength(head);
    if(position == 1) {
        // insertAtHead(head, data);
    }
    if(position == length+1) {
        // insertAtTail(head, data);
    } else {
        Node* prevNode = NULL;
        Node* currNode = head;
        Node* newNode = new Node(data);
        while(position != 1) {
            position--;
            prevNode = currNode;
            currNode = currNode->next;
        }
        prevNode->next = newNode;
        newNode->next = currNode;
    }   
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    print(head);

    cout << "print before insert: " << endl;
    print(head);

    insertAtPosition(head, 5, 25);

    cout << "print after insert at position: " << endl;
    print(head);
    return 0;
}