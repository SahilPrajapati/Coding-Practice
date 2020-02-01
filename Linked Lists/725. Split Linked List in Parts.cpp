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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        
        ListNode* trav = root;
        vector<ListNode*> nodeVector;
        int length = 0;
        
        while(trav)
        {
            length++;
            trav = trav->next;
        }
        
        trav = root;
        
        int avg = length / k;
        int rem = length % k;
        
        int blockLength     = 0;
        ListNode* blockHead = NULL;
        ListNode* blockCurr = NULL;
        
        while(trav)
        {
            blockLength = (rem) ? (rem--, avg + 1) : avg;
            blockHead   = (blockLength)? new ListNode(trav->val) : nullptr;
            blockCurr   = blockHead;
            
            while(--blockLength)
            {
                trav = trav->next;
                ListNode* temp = new ListNode(trav->val);
                

                blockCurr->next = temp;
                blockCurr = temp;
            }
            trav = trav->next;   
            nodeVector.push_back(blockHead);
        }
        
        for(int i = 0; i < (k - length); i++)
            nodeVector.push_back(NULL);
            
        
        return nodeVector;
        
    }
};
