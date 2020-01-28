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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* ptr = head;
        
        if(!head)
            return NULL;
        
        while(ptr->next)
        {
            if(ptr->val == ptr->next->val)
                ptr->next = ptr->next->next;
            
            else
                ptr = ptr->next;
        }
        
        return head;
    }
};
