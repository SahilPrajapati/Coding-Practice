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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        int small = min(p->val, q->val);    
        int large = max(p->val, q->val);
        
        while(root->val > large || root->val < small)
        {
           if(root->val <= large && root->val >= small)
            return root;
            
            if(root->val > large)
                root = root->left;

            else
                root = root->right;
        }
        
        return root;
        /*
        int small = min(p->val, q->val);    
        int large = max(p->val, q->val);    
        
        if(root->val <= large && root->val >= small)
            return root;
        
        if(root->val > large)
            return lowestCommonAncestor(root->left, p, q);
        
        else
            return lowestCommonAncestor(root->right, p, q);
            */
    }
};
