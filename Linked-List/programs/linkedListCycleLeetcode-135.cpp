// approach1: Usind map(visited address)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*, bool> table;
        ListNode* temp = head;
        while(temp != NULL) {
            if(table[temp] == false) {
                table[temp] = true;
            } else {
                // cycle present
                return true;
            }
            temp = temp->next;
        }
        // loop not present
        return false;
    }
};