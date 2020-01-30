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
    void reorderList(ListNode* head) {
        
        if(!head)
            return;
        
        ListNode* start = head;
        ListNode* end   = head;

        
        while(start->next && start->next->next)
        {
            while(end->next->next)
                end = end->next;
            
            end->next->next = start->next;
            start->next = end->next;
            end->next = NULL;
            
            start = start->next->next;
            end = start;
        }
        
    }
};
