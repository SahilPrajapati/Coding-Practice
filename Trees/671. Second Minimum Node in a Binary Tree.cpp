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
    void findMin(TreeNode* root, long& min, int k)
    {
        if(root->left && root->val == root->left->val)
        {
            if(min > root->right->val && root->right->val != k)
                min = root->right->val;
            
            findMin(root->left, min, k);
        }
        
        if(root->right && root->val == root->right->val)
        {
            if(min > root->left->val && root->left->val != k)
                min = root->left->val;
            findMin(root->right, min, k);
        }
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        
        long min = LONG_MAX;
        
        findMin(root, min, root->val);
        cout<<min;
        return (min == root->val || min == LONG_MAX)? -1: (int)min;
        
    }
};
