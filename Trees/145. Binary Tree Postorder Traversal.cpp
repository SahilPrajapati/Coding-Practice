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
    vector<int> postorderTraversal(TreeNode* root) {
     
        
        //ITERATIVE
        
        if(!root)
            return {};
        
        stack<TreeNode*> s;
        vector<int> result;
        TreeNode* prev = NULL;
        
        while(1)
        {
            while(root)
            {
                s.push(root);
                root = root->left;
            }
            
            if(s.empty())
                return result;
            
            root = s.top();
            
            if(root->right == prev || !(root->right))
            {
                s.pop();
                result.push_back(root->val);
                prev = root;
                root = NULL;
            }
            else
                root = root->right;
                
        }
        
        return result;
        
       /* 
         //RECURSIVE
        
        
        vector<int> data;
        inorder(root, data);
        return data;
        
    }
    
    void inorder(TreeNode* root, vector<int>& data)
    {
        if(!root)
            return;
        
        
        inorder(root->left, data);
        inorder(root->right, data);
        data.push_back(root->val);
     */  
    }
};
