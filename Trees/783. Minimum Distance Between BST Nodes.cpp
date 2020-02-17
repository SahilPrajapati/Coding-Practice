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
    
    void getMin(TreeNode* root, int& result, int& prev)
    {
        if(!root) return;
        
        getMin(root->left, result, prev);
        
        if(prev != -1)
            result = min(root->val - prev, result);
        
        prev = root->val;
        
        getMin(root->right, result, prev);
    }
    
    int minDiffInBST(TreeNode* root) {
        
        int result = INT_MAX;
        int prev = -1;
        
        getMin(root, result, prev);
        
        return result;
    }
};
