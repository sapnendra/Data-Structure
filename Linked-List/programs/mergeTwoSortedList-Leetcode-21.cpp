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

Node* mergeTwoSortedList(Node* list1Head, Node* list2Head) {
    Node* list1 = list1Head;
    Node* list2 = list2Head;
    Node* merge = new Node(-1);
    Node* list3 = merge;
    while(list1 != NULL && list2 != NULL) {
        if(list1->data < list2->data) {
            list3->next = list1;
            list1 = list1->next;
        } else {
            list3->next = list2;
            list2 = list2->next;
        }
        list3 = list3->next;
    }
    
    // when list1 element remaining
    while(list1 != NULL) {
        list3->next = list1;
        list1 = list1->next;
        list3 = list3->next;
    }

    // when list2 element remaining
    while(list2 != NULL) {
        list3->next = list2;
        list2 = list2->next;
        list3 = list3->next;
    }
    return merge->next;
}

int main() {
    Node* list1Head = NULL;
    Node* list1Tail = NULL;
    int n;
    cout << "Enter the number of data in first list: ";
    cin >> n;
    cout << "Enter data: " << endl;
    for(int i=0; i<n; i++) {
        int data;
        cin >> data;
        insertAtTail(list1Head, list1Tail, data);
    }
    cout << "List 1: " << endl;
    print(list1Head);

    Node* list2Head = NULL;
    Node* list2Tail = NULL;

    int m;
    cout << "Enter the number of data in second list: ";
    cin >> m;
    cout << "Enter data: " << endl;
    for(int i=0; i<m; i++) {
        int data;
        cin >> data;
        insertAtTail(list2Head, list2Tail, data);
    }
    cout << "List 2: " << endl;
    print(list2Head);

    Node* mergedListHead = mergeTwoSortedList(list1Head, list2Head);
    cout <<"Merged list: "<< endl;
    print(mergedListHead);
    return 0;
}