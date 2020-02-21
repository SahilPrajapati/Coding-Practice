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
    bool helper(TreeNode* root, TreeNode* MaxNode, TreeNode* MinNode) {
        if (!root)
            return true;
			
		// check if value of root satisfies the subtree comparision
        if (MinNode && MinNode->val>= root->val || 
            MaxNode && MaxNode->val <= root->val)
            return false;
        
		// check for further subtrees 	
        bool left = helper(root->left, root, MinNode);
        bool right = helper(root->right, MaxNode, root);
        
        return (left && right);
    }
    
    bool isValidBST(TreeNode* root) {
        if (!root)
            return true;
        return helper(root, NULL, NULL);
    }
};
