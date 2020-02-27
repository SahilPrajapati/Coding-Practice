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
    void findBLV(TreeNode* root, int& maxLevel, int curLevel, int& leftValue)
    {
        if(!root) return;
        
        curLevel++;
        
        if(curLevel > maxLevel)
        {
            maxLevel = curLevel;
            leftValue = root->val;
        }
        
        findBLV(root->left, maxLevel, curLevel, leftValue);
        findBLV(root->right, maxLevel, curLevel, leftValue);
            
    }
    
    int findBottomLeftValue(TreeNode* root) {
        
        int maxLevel = 0;
        int curLevel = 0;
        int leftValue = 0;
        
        findBLV(root, maxLevel, curLevel, leftValue);
        
        return leftValue;
        
        /*
        queue<TreeNode*> q;
        q.push(root);
        int leftValue = root->val;
        
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr->right)
            {
                q.push(curr->right);
                leftValue = curr->right->val;
            }
            if(curr->left)
            {
                q.push(curr->left);
                leftValue = curr->left->val;
            }
        }
        
        return leftValue;
        */
    }
};
