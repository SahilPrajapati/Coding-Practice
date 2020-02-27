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
    bool prune(TreeNode* root, TreeNode* parent)
    {
        if(!root)
            return (parent->val == 0) ? false : true;
        
        bool left  = prune(root->left, root);
        bool right = prune(root->right, root);
        
        if(!left && !right && root->val == 0)
        {
            (parent->left == root) ? parent->left = NULL : parent->right = NULL;
            return false;
        }
        else return true;
    }
    TreeNode* pruneTree(TreeNode* root) {
        
        if(!root ||(!root->left && !root->right && root->val == 0))
            return NULL;
        
        bool a = prune(root, root);
        
        return root;
    }
};
