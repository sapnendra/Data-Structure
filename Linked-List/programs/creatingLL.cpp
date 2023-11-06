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
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}

void lengthOfTheList(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    cout << "Length of the list: " << count << endl;
}

int main() {
    // creating first node
    // Node head(10); - static initialization
    Node* first = new Node(10);  // dynamic initialization
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    Node* head = first;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << "Printng entire list: " << endl;
    print(head);

    cout << endl;
    return 0;
}