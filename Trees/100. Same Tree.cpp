/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool check(TreeNode* p, TreeNode* q)
    {
        if(!p && !q)
            return true;
        
        if(!p || !q )
            return false;
        
        if(p->val != q->val)
            return false;
        
        return true;
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(!p && !q)
            return true;
        
        //ITERATIVE
        deque<TreeNode*> deqP{p};
        deque<TreeNode*> deqQ{q};
        
        while(!deqP.empty())
        {
            p = deqP.front();
            q = deqQ.front();
            
            deqP.pop_front();
            deqQ.pop_front();
            
            if(!check(p,q))
                return false;
            
            if(p->left || q->left)
            {
                deqP.push_back(p->left);
                deqQ.push_back(q->left);
            }
            
            if(p->right || q->right)
            {
                deqP.push_back(p->right);
                deqQ.push_back(q->right);
            }
        }
        return true;
        
        //RECURSIVE
        /*
        if(!q && !p)
            return true;
        
        if(!p || !q)
            return false;
        
        if(p->val != q->val)
            return false;
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        */
        
    }
};
