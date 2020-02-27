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
    void insertNode(TreeNode* root, int val)
    {
        if(root->val > val)
        {
            if(root->left)
                insertNode(root->left, val);
            
            else
            {
                root->left = new TreeNode(val);
                return;
            }
        }
        
        else
        {
            if(root->right)
                insertNode(root->right, val);
            
            else
            {
                root->right = new TreeNode(val);
                return;
            }
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)
        {
            root = new TreeNode(val);
            return root;
        }
        
        insertNode(root, val);
        
        return root;
    }
};
