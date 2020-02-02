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
    ListNode* reverseKGroup(ListNode* head, int k) {
    
        int count = 0;
        ListNode* curr = head;
        
        while(curr)
        {
            count++;
            curr = curr->next;
        }
        
        if(count < k || !head)
            return head;
        
        count = 0;
        curr = head;
        ListNode* prev = NULL;
        ListNode* after = NULL;
        
        while(curr && count < k)
        {
            after = curr->next;
            curr->next = prev;
            prev = curr;
            curr = after;
            
            count++;
        }
        
        head->next = reverseKGroup(curr, k);
        
        return prev;
    }
};
