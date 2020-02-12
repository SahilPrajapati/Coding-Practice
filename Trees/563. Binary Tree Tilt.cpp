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
    int findTiltSum(TreeNode* root, int& sum)
    {
        int ls = 0;
        int rs = 0;
        
        if(!root)
            return 0;
        
        ls += findTiltSum(root->left, sum);
        rs += findTiltSum(root->right, sum);
        
        sum += abs(ls - rs);
        
        return ls + rs + root->val;    
    }
    
    int findTilt(TreeNode* root) {
        int sum = 0;
        
        findTiltSum(root, sum);
        
        return sum;
    }
};
