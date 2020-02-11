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
    void findValue(TreeNode* root, int value, int& newValue)
    {
        if(!root) return;
        
        if(root->val > value)
            newValue += root->val;
        
        findValue(root->left, value, newValue);
        findValue(root->right, value, newValue);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        
        if(!root)
            return root;
        
        queue<TreeNode*> q;
        queue<TreeNode*> qGreat;
        
        TreeNode* rootGreat = new TreeNode(root->val);
        TreeNode* temp = rootGreat;
        TreeNode* original = root;
        q.push(root);  
        qGreat.push(rootGreat);  
            
        while(!q.empty())
        {
            root = q.front();
            q.pop();
            
            temp = qGreat.front();
            qGreat.pop();
            
            int newValue = root->val;
            findValue(original, root->val, newValue);
            temp->val = newValue;
            
            if(root->left)  
            {
                q.push(root->left);
                temp->left = new TreeNode(root->left->val);
                qGreat.push(temp->left);
            }
            
            if(root->right) 
            {
                q.push(root->right);
                temp->right = new TreeNode(root->right->val);
                qGreat.push(temp->right);
            }
        }
        
        return rootGreat;
    }
};*/

class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        if(!root)
            return NULL;
        int sum = 0;
        
        compute(root, sum);
        
        return root;
    }
    
    void compute(TreeNode* root, int& sum)
    {
        if(!root) return;
        
        compute(root->right, sum);
        root->val += sum;
        sum = root->val;
        
        compute(root->left, sum);
        
    }
};
