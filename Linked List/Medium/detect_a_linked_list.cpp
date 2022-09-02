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
        if(!head)
            return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        do
        {
            if(fast->next && fast->next->next)
                fast=fast->next->next;
            else 
                return NULL;
            slow=slow->next;
        }while(slow!=fast);
        ListNode *start=head;
        while(true)
        {
            if(fast==start)
                return fast;
            start=start->next;
            fast=fast->next;
        }
    }
};