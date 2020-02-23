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
    void calculateSum(TreeNode* root, int pathSum, int& result)
    {
        if(!root)
            return;
        
        pathSum = pathSum*10 + root->val;
        
        if(!root->left && !root->right)
            result += pathSum;
        
        calculateSum(root->left, pathSum, result);
        calculateSum(root->right, pathSum, result);
    }
    
    int sumNumbers(TreeNode* root) {
        int result = 0;
        int pathSum = 0;
        
        calculateSum(root, pathSum, result);
        
        return result;
    }
};
