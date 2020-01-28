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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* a = head;
        
        while(head)
        {
            if(a->val == val)
            {
                a = a -> next;
                head = a;
                continue;
            }
            
            if((head->next) && head->next->val == val)
            {
                head->next = head->next->next;
                continue;
            }
            head = head->next;
            
        }
        
        return a;
        
    }
};
