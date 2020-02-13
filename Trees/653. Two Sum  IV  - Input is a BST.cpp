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
    bool isHaving(TreeNode* root, int value, TreeNode* curr)
    {
        if(!root) return false;
        
        if(root->val == value && root != curr)
            return true;
        
        bool r1 = false;
        bool r2 = false;
        if(value > root->val)
            r1 =  isHaving(root->right, value, curr);
        else
            r2 =  isHaving(root->left, value, curr); 
        
        return r1 || r2;
    }
    
    
    bool findTarget(TreeNode* root, int target) {
        if(!root)
            return false;
        
        queue<TreeNode*>q;
        q.push(root);
        bool result = false;
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            
            result = isHaving(root, target - curr->val, curr);
            
            if(result)      return true;
            if(curr->left)  q.push(curr->left);
            if(curr->right) q.push(curr->right);
                
        }
        return result;
    }
};
