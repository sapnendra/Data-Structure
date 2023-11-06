#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        cout << "Destructor called for: " << this->data << endl;
    }
};

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data <<"->";
        temp = temp->next;
    }
    cout << endl;
}

int findLength(Node* &head) {
    Node* temp = head;
    int length = 0;
    while(temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    if(head == NULL) {
        // empty LL - means head and tail both are pintng to the same node
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        // non-empty LL
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(head == NULL) {
        // empty LL
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        // non-empty LL
        Node* newNode = new Node(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    if(head == NULL) {
        // empty LL
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    int length = findLength(head);

    if(position <= 1) {
        // insert at head
        insertAtHead(head, tail, data);
    }
    else if(position >= length) {
        // insert at tail
        insertAtTail(head, tail, data);
    } else {
        // insert at middile
        // step1: create newNode and 2 pointer node
        Node* newNode = new Node(data);
        Node* preNode = NULL;
        Node* currNode = head;
        // step2: set preNode/currNode to position
        while(position != 1) {
            position--;
            preNode = currNode;
            currNode = currNode->next;
        }
        // step3: point preNode to newNode
        preNode->next = newNode;
        newNode->prev = preNode;

        // step4: point newNode to currNode
        newNode->next = currNode;
        currNode->prev = newNode;
    }
}

void deleteNode(Node* &head, Node* &tail, int position) {
    int length = findLength(head);
    if(head == NULL) {
        // empty LL
        cout << "Deletion operation can't perform, Coz LL is Empty";
        return;
    }

    else if(head == tail) {
        // single node
        Node* temp = head;
        delete temp;
        head = NULL;
        tail == NULL;
        return;
    }

    else if(position <= 1) {
        // delete from head
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;
    // insert at head
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    cout <<"Insertion at head" << endl;
    print(head);

    // insert at tail
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    cout <<"Insertion at tail" << endl;
    print(head);

    // insert at any position
    insertAtPosition(head, tail, 5, 4);
    cout <<"Insertion at any position" << endl;
    print(head);

    // deletion 
    deleteNode(head, tail, 1);
    print(head);

    cout << "I reached here" << endl;

    return 0;
}