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
    
    void findPath(TreeNode* root, string currPath, vector<string>& result)
    {
        if(!root) return;
        
        if(!root->right && !root->left)
        {
            currPath += to_string(root->val);
            result.push_back(currPath);
            return;

        }
        
        currPath += to_string(root->val) + "->";
        findPath(root->left, currPath, result);
        findPath(root->right, currPath, result);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string> result;
        string currPath = "";
        
        findPath(root, currPath, result);
        
        return result;
    }
};
