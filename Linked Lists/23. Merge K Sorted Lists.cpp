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
    ListNode* mergeKLists(vector<ListNode*>& curr) {
        
        ListNode* newHead = new ListNode(-1);
        ListNode* newCurr = newHead;
                
        while(curr.size())
        {
            int min = INT_MAX;
            int i = 0;
            int minIndex = 0;
            
            while(i < curr.size())
            {
                if(!curr[i])
                {
                    curr.erase(curr.begin() + i );
                    continue;
                }
                else if(curr[i]->val < min)
                {
                    minIndex = i;
                    min = curr[i]->val;
                }
                i++;
            }
            if(min != INT_MAX)
            {
                curr[minIndex] = curr[minIndex]->next;
                ListNode* temp = new ListNode(min);
                newCurr->next = temp;
                newCurr = temp;
            }
                
        }
        return newHead->next;
        
    }
};
