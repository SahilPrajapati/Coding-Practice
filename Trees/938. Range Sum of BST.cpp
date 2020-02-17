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
    void calculate(TreeNode* root, int L, int R, int& sum)
    {
        if(!root)
            return;
        
        if(L <= root->val && root->val <= R)
            sum += root->val;
        
        calculate(root->left, L, R, sum);
        calculate(root->right, L, R, sum);
    }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        
        if(!root)
            return 0;

        int sum = 0;        
        calculate(root, L, R, sum);
        
        return sum;
    }
};
