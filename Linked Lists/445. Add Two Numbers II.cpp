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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        ListNode* result = nullptr;
        
        stack<int> stack1, stack2;
        
        while(l1)
        {
            stack1.push(l1->val);
            l1 = l1->next;
        }
        
        while(l2)
        {
            stack2.push(l2->val);
            l2 = l2->next;
        }
        
        
        while(!stack1.empty() || !stack2.empty() || carry)
        {
            int value1 = stack1.empty() ? 0 : stack1.top();
            int value2 = stack2.empty() ? 0 : stack2.top();
            
            int sum = value1 + value2 + carry;
            carry = sum/10;
            
            ListNode* newDigit = new ListNode(sum % 10);
            newDigit->next = result;
            result = newDigit;
            
            if(!stack1.empty()) stack1.pop();
            if(!stack2.empty()) stack2.pop();
        }
        
        return result;
    }
};
