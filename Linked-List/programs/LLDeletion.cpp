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
    ~Node(){
        cout << "Distructor called for: " << this->data << endl;
    }
};

int findLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void print(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int data)
{
    if(head == NULL){
        // empty LL - means head and tail both are pintng to the same node
        // step1 : create a new node
        Node* newNode = new Node(data);
        // step2 : attach newNode to head
        head = newNode;
        tail = newNode;
    } else {
        // non-empty LL
        // step1 = create a new node
        Node* newNode = new Node(data);
        // step2 = attach newNode to head node
        newNode->next = head;
        // step3 = update head
        head = newNode;
    }
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

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    int length = findLength(head);
    if(position <= 1) {
        // insert at head position
        insertAtHead(head, tail, data);
    }
    
    else if(position >= length) {
        // insert at tail position
        insertAtTail(head, tail, data);
    }
    else {
        // insert at middle of the linked list

        // step1: create a new node
        Node* newNode = new Node(data);
        Node* prev = NULL;
        Node* curr = head;        
        //step2: traverse prev/curr pointers till position
        while(position != 1) {
            prev = curr;
            curr = curr->next;
            position--;
        }
        //step3: attach newNode to prev and curr pointers
        prev->next = newNode;
        newNode->next = curr;
    }
}


void deleteNode(Node* &head, Node* &tail, int position) {
    int length = findLength(head);
    if(head == NULL) {
        // LL is empty
        cout << "List is empty" << endl;
        return;
    }

    else if(head == tail) {
        // single element in LL
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }


    else if(position <= 1) {
        // first node ko delete kardo
        // step1: create a temporary Node
        Node* temp = head;
        // step2: update head
        head = head->next;
        // step3: isolate the temp node
        temp->next = NULL;
        // memory free
        delete temp;

    } else if(position >= length) {
        // last node delete kardo
        Node* prev = head;

        // step1: traverse till second last node - prev
        while(prev->next != tail) {
            prev = prev->next;
        }

        // step2: point prev->next to NULL for isolate tail node
        prev->next = NULL;

        // step3: memory free by deleting isolated node called tail
        delete tail;

        // step4: uppdate tail to prev
        tail = prev; 

    } else {
        // middile node delete kardo

        Node* prev = NULL;
        Node* curr = head;
        // step1: traverse prev and curr pointer to position
        while(position != 1) {
            prev = curr;
            curr = curr->next;
            position--;
        }

        // step2: point prev->next to curr->next for isolating the curr node
        prev->next = curr->next;

        // step3: point curr-next to NULL
        curr->next = NULL;

        // mermory free by deleting curr node
        delete curr;
    }
    return;
}


int main() {

    Node* head = NULL;
    Node* tail = NULL;

    // inserting at tail position
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    // inserting at tail position
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);
    insertAtTail(head, tail, 80);
    insertAtTail(head, tail, 90);
    insertAtTail(head, tail, 100);

    // inserting at any position
    insertAtPosition(head, tail, 60, 1);
    print(head);
    cout << "Length of LL is : " << findLength(head) << endl;
    // node deletion
    deleteNode(head, tail, 9);
    print(head);
    return 0;
}