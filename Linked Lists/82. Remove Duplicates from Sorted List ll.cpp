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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* prev = NULL;
        ListNode* node = head;
        
        while(node)
        {
            if(node->next && node->val == node->next->val)
            {
                ListNode* next = node->next->next;
                while(next && next->val == node->val)
                    next = next->next;
                
                node = next;
            }
            
            else
            {
                if(prev)
                    prev->next = node;
                
                else
                    head = node;
                
                prev = node;
                node = node->next;
            }
        }
        
        if(!prev)
            return NULL;
        
        prev->next = NULL;
        return head;
        
        
        
    }
};
