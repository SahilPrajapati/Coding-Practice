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
    bool check(TreeNode* root, int value)
    {
        if(!root)
            return true;
        
        return (root->val == value) && check(root->left, value) && check(root->right, value);
    
    }
    
    bool isUnivalTree(TreeNode* root) {
        
        if(!root)
            return true;
        
        return check(root, root->val);
        
    }
};
