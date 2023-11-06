#include<bits/stdc++.h>
using namespace std;


// Approach 1: Using length of the list
class Solution {
public:
    int findLength(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            length++;
            temp = temp->next;
        }
        return length;
    }

    ListNode* middleNode(ListNode* head) {
        int n = findLength(head);
        int position = n/2+1;
        int currPosition = 1;
        ListNode* temp = head;
        while(currPosition != position) {
            currPosition++;
            temp = temp->next;
        }
        return temp;
    }
};

// Approach 2: Using fast and slow pointers
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
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
};