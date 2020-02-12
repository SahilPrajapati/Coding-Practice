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
    
    bool isSameTree(TreeNode* s, TreeNode* t)
    {
        if(!s && !t) return true;
        
        if(s && t && (s->val == t->val))
            return isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
        
        return false;
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) 
    {
        queue<TreeNode*> q;
        bool result = false;
        
        q.push(s);
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            
            result = isSameTree(curr, t);
            if(result) return true;
            
            if(curr)
            {
                q.push(curr->left);
                q.push(curr->right);
            }
        }

        return result;
        
            
    }
};
