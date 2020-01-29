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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        
        for(int i = 1; i <= n; i++)
            ptr1 = ptr1 ->next;
        
        if(!ptr1)
            return head->next;
        
        while(ptr1->next)
        {
            ptr1 = ptr1 -> next;
            ptr2 = ptr2 -> next;
        }
        
        ptr2->next = ptr2->next->next;
        
        return head;
                
    }
};
