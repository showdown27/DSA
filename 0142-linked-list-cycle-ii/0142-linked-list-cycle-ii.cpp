/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        int count = -1;
        while(fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                slow = head;
                count  = 0;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                    count++;
                }
                return slow;
            }
        }
        return NULL;
    }
};