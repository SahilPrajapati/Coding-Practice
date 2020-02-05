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
    bool isBalanced(TreeNode* root) {
        
        if(!root)
            return true;
        
        bool flag = true;
        check(root, flag);
        
        return flag;
    }
    
    int check(TreeNode* root, bool& flag)
    {
        if(!root)
            return 0;
        
        int left = check(root->left, flag);
        int right = check(root->right, flag);
        
        if(abs(left - right) > 1)
        {
            flag = false;
            return 0;
        }
        
        return max(left, right) + 1;
    }
};
