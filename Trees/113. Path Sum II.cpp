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
    void findPath(TreeNode* root, int sum, vector<vector<int>>& result, vector<int> tempResult)
    {
        if(!root)
            return;
        
        tempResult.push_back(root->val);
        
        if(sum == root->val && !root->left && !root->right )
            result.push_back(tempResult);
        
        findPath(root->left , sum - root->val, result, tempResult);
        findPath(root->right, sum - root->val, result, tempResult);
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<vector<int>> result;
        vector<int> tempResult;
        
        findPath(root, sum, result, tempResult);
        return result;
        
    }
};
