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
    bool hasPathSum(TreeNode* root, int sum) {
        
        if(!root) return false;
        
        int remainingSum = sum - root->val;
        
        if(!root->left && !root->right && remainingSum == 0)
            return true;
        
        return hasPathSum(root->left, remainingSum) || hasPathSum(root->right, remainingSum);
        
    }
};
