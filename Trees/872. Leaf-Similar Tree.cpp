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
    void findLeaves(TreeNode* root, vector<int>& leaves)
    {
        if(!root) return;
        
        findLeaves(root->left, leaves);
        
        if(!root->left && !root->right)
            leaves.push_back(root->val);
        
        findLeaves(root->right, leaves);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> leaves1{}, leaves2{};
        
        findLeaves(root1, leaves1);
        findLeaves(root2, leaves2);
        
        
        return (leaves1 == leaves2) ? true : false;
    }
};
