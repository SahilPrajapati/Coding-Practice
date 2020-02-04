#include<math.h>
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
    int maxDepth(TreeNode* root) {
        
        if(!root)
            return 0;
        
        int h1 = maxDepth(root->left);
        int h2 = maxDepth(root->right);
        
        return max(h1, h2) + 1;
    }
};
