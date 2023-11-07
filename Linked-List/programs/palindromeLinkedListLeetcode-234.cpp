#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
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
    cout << endl;
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

Node* middleNode(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            // yaha tak maine fast pointer ko two step se aage push kar chuka hu
            // ab slow ko one step aage push kr sakte hai
            slow = slow->next;
        }
    }
    return slow;
}

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool comopareList(Node* head, Node* head2) {
    Node* list1 = head;
    Node* list2 = head2;
    while(list2 != NULL) {
        if(list1->data != list2->data) {
            return false;
        } else {
            list1 = list1->next;
            list2 = list2->next;
        }
    }
    return true;
}

bool isPalindromeList(Node* head) {
    Node* mid = middleNode(head);
    Node* head2 = mid->next;
    mid->next = NULL;
    head2 = reverseList(head2);
    return comopareList(head, head2);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    for(int i=0; i<5; i++) {
        int data;
        cin >> data;
        insertAtTail(head, tail, data);
    }

    bool flag = isPalindromeList(head);
    if(flag) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}