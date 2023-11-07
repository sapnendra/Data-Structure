#include<bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int data;
    ListNode* next;

    ListNode() {
        ListNode* next = NULL;
    }
    ListNode(int data) {
        this->next = NULL;
        this->data = data;
    }
    ~ListNode() {
        cout << "Distructor called for: " << this->data << endl;
    }
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL) {
            fast = fast->next;
            if(fast != NULL) {
                fast = fast->next;
                slow = slow->next;
            }
            if(slow == fast) {
                break;
            }
        }
        // no cycle present
        if(fast == NULL) return NULL;

        // check for starting point of list
        slow = head;
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow; // or fast
    }
};