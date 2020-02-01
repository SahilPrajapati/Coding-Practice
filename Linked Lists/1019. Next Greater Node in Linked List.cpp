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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> result;
        ListNode* prev = NULL;
        ListNode* after = head->next;
        
        head->next = NULL;

        //LL reversal
        while(after)
        {
            prev = head;
            head = after;
            after = after->next;
            
            head->next = prev;
        }
        
        stack<int> stk;
        ListNode* trav = head;
        
        while(trav)
        {
            while(!stk.empty() && stk.top() <= trav->val)
                stk.pop();
            
            stk.empty() ? result.push_back(0) : result.push_back(stk.top());
            stk.push(trav->val);
            trav = trav->next;
                
        }
        
        reverse(result.begin(), result.end());
        return result;
        
        //BRUTE FORCE
        /*
        vector<int> nextLargerVector;
        ListNode* curr = head;
        
        while(curr)
        {
            ListNode* trav = curr->next;
            bool flag = true;
            
            while(trav)
            {
                if(trav->val > curr->val)
                {
                    flag = false;
                    nextLargerVector.push_back(trav->val);
                    break;
                }
                trav = trav->next;
            }
            
            if(flag)
                nextLargerVector.push_back(0);
            
            curr = curr->next;
        }
        
        return nextLargerVector;
        */
    }
};
