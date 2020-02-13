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
    int longestPath(TreeNode* root, int& maxLen)
    {
        if(!root) return 0;
        
        int num1 = longestPath(root->left,  maxLen);
        int num2 = longestPath(root->right, maxLen);
        
        num1 = (root->left  && root->left->val  == root->val) ? num1 : 0;
        num2 = (root->right && root->right->val == root->val) ? num2 : 0;
        
        maxLen = max(maxLen, num1 + num2);
        
        return max(num1, num2) + 1;
    }
    
    int longestUnivaluePath(TreeNode* root) {
        
        if(!root) return 0;
        
        int maxLen = 0;
        longestPath(root, maxLen);
        return maxLen;
    }
};
