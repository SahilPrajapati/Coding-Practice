/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/*
class Solution {
public:
    
    int Diameter(TreeNode* root)
    {
        if(!root)
            return 0;
        
        int h1 = Diameter(root->left);
        int h2 = Diameter(root->right);
        
        return max(h1,h2) + 1;
    }
    int m = INT_MIN;
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        
        int h1 = Diameter(root->left);
        int h2 = Diameter(root->right);
        
        if(m < (h1 + h2))
            m = h1 + h2;
        
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        cout<<h1<<" "<<h2;
        return m;
        
    }
};
*/

class Solution {
public:
    
    int compute(TreeNode* root, int& diameter)
    {
        if(!root)
            return 0;
        
        int heightLeft = compute(root->left, diameter);
        int heightRight = compute(root->right, diameter);
        
        diameter = max(diameter, heightLeft + heightRight);
        
        return 1 + max(heightLeft, heightRight);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int diameter = 0;
        compute(root, diameter);
        
        return diameter;
    }
};
