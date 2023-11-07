#include<bits/stdc++.h>
using namespace std;
class ListNode{
public:
    int data;
    ListNode* next;
};

class Solution {
public:
    int getLength(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL) {
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL ) {
            return head;
        }
        if(head->next == NULL) {
            return head;
        }

        //1 case main solve karunga
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextNode = curr->next;
        int pos = 0;

        int len = getLength(head);
        if(len < k) {
            return head;
        }

        while(pos < k ){
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            pos++;
        }

        ListNode* recursionKaAns = NULL;
        if(nextNode != NULL) {
            recursionKaAns = reverseKGroup(nextNode, k);
            head->next = recursionKaAns;
        }

        return prev;
    }
};

int main() {

    return 0;
}