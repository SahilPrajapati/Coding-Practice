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
    int numComponents(ListNode* head, vector<int>& G) {
        
        unordered_set<int> s{G.begin(), G.end()};
        
        int count = 0;
        int currCount = 0;
        
        ListNode* trav = head;
        
        while(trav)
        {
            if(s.find(trav->val) != s.end())
                currCount++;
            
            else if(currCount)
            {
                count++;
                currCount = 0;
            }
            
            trav = trav->next;
        }
        
        
        if(currCount)
            count++;
        
        return count;
    }
};
