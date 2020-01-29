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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        ListNode* newHead = new ListNode(-1);
        newHead->next = head;
        
        ListNode* prev  = NULL;
        ListNode* after = NULL;
        
        ListNode* trav  = newHead;
        
        for(int i = 0; i < m-1; i++)
            trav = trav->next;
        
        prev  = trav;
        head  = prev->next;
        after = head->next;
        
        for(int i = 0; i < n-m; i++)
        {
            prev  = head;
            head  = after;
            after = after->next;
            
            head->next = prev;
        }
        
        trav->next->next = after;
        trav->next       = head;
        
        return newHead->next;
    }
};
