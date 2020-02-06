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
    vector<int> inorderTraversal(TreeNode* root) {
     
        //ITERATIVE
        
        if(!root)
            return {};
        
        stack<TreeNode*> s;
        vector<int> result;
        
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
            result.push_back(root->val);
            s.pop();
            root = root->right;
                
        }
        
        return result;
        
        
         //RECURSIVE
        
     /*   
        vector<int> data;
        inorder(root, data);
        return data;
        
    }
    
    void inorder(TreeNode* root, vector<int>& data)
    {
        if(!root)
            return;
        
        inorder(root->left, data);
        data.push_back(root->val);
        inorder(root->right, data);
       */
    }
};
