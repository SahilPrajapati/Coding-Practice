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
    void flatten(TreeNode* root) {
        
        if(!root) return;
        
        TreeNode* leftSubtree = nullptr;
        while(root)
        {
            if(root->left && root->right)
            {
                leftSubtree = root->left;
                
                while(leftSubtree->right)
                    leftSubtree = leftSubtree->right;
                
                leftSubtree->right = root->right;
            }
            
            if(root->left)
            {
                root->right = root->left;
                root->left = nullptr;
            }
            
            root = root->right;
        }
        
    }
};
