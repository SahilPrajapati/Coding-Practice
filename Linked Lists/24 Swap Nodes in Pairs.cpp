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
    ListNode* swapPairs(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr)
            return head;
        
        ListNode* n1 = head;
        ListNode* n2 = head->next;
        
        ListNode* nextNode = swapPairs(head->next->next);
        
        n2->next = n1;
        n1->next = nextNode;
        
        return n2;
        
    }
};
