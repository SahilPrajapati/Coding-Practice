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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* l3 = new ListNode(-1);
        ListNode* l4 = l3;
        int carry = 0;
        add(l1, l2, l3, carry);
        
        return l4->next;
    }
    
    void add(ListNode* l1, ListNode* l2, ListNode*& l3, int& carry)
    {

        if(l1 && l2)
        {

            int sum = l1->val + l2->val + carry;
            
            l3->next = new ListNode(sum % 10);
            carry = sum / 10;

            l3 = l3->next;
            add(l1->next, l2->next, l3, carry);
            cout<<l3->val<<" ";
        }
        else if(l1)
        {

            int sum = l1->val + carry;
            
            l3->next = new ListNode(sum % 10);
            carry = sum / 10;

            l3 = l3->next;
            cout<<l3->val<<" ";
            add(l1->next, NULL, l3, carry);
        }
        else if(l2)
        {

            int sum = l2->val + carry;
            
            l3->next = new ListNode(sum % 10);
            carry = sum / 10;

            l3 = l3->next;
            cout<<l3->val<<" ";
            add(NULL,l2->next, l3, carry);
        }
        
        else
        {
            if(carry)            
                l3->next = new ListNode(carry);
            return;
        }
            
        

        
    }
};
