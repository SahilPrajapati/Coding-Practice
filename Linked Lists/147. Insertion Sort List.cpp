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
    ListNode* insertionSortList(ListNode* head) {
        
        if(!head || !head->next)
            return head;
        
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* key = head->next;
        ListNode* start = dummy;
        ListNode* end = head;
        
        while(key)
        {
            if(key->val >= end->val)
            {
                end = key;
                key = key->next;
                continue;
            }
            
            while(start->next->val < key->val)
                start = start->next;
                
            ListNode* keyNext = key->next;
            end->next = key->next;
            key->next = start->next;
            start->next = key;

            key = keyNext;
            start = dummy;
            head = dummy->next;
            
            
        }
        
        return head;
    }
};
