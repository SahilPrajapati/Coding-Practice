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
    ListNode* oddEvenList(ListNode* head) {
        
        if(!head)
            return head;
        
        ListNode* s = head;
        ListNode* t = head->next;
        
        while(t && t->next)
        {
            ListNode* sNext = s->next;
            s->next = t->next;
            t->next = t->next->next;
            s->next->next = sNext;
            
            s = s->next;
            t = t->next;
        }
        
        return head;
        

    }
};

