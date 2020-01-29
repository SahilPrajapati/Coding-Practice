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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* lessThan    = new ListNode(-1);
        ListNode* greaterThan = new ListNode(-1);

        ListNode* l    = lessThan;
        ListNode* g    = greaterThan;
        ListNode* curr = head;
        
        while(curr)
        {
            if(curr->val < x)
            {
                l->next = new ListNode(curr->val);
                l = l->next;
            }
            
            else
            {
                g->next = new ListNode(curr->val);
                g = g->next;
            }
            
            curr = curr->next;
        }
        
        l->next = greaterThan->next;
        
        
        
        return lessThan->next;
        
    }
};
