#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node()
    {
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

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

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    // inserting at tail position

    insertAtHead(head, tail, 20);
    print(head);

    insertAtHead(head, tail, 30);
    print(head);

    insertAtHead(head, tail, 40);
    print(head);

    insertAtHead(head, tail, 50);
    print(head);

    // inserting at tail position

    insertAtTail(head, tail, 60);
    print(head);

    insertAtTail(head, tail, 70);
    print(head);

    insertAtTail(head, tail, 80);
    print(head);

    insertAtTail(head, tail, 90);
    print(head);

    insertAtTail(head, tail, 100);
    print(head);

    return 0;
}