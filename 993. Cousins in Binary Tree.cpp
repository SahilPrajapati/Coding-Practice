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
    
    int height(TreeNode* root, int x, int depth)
    {
        if(!root)
            return 0;
        
        if(root->val == x)
            return depth;
        
        int level =  height(root->left, x, depth + 1);
        
        if(level != 0)
            return level;
        
        return height(root->right, x, depth + 1);
        
    }
    
    TreeNode* parentNode(TreeNode* root, int x)
    {
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr->left)
            {
                q.push(curr->left);
                if(curr->left->val == x)
                    return curr;
            }
            if(curr->right)
            {
                if(curr->right->val == x)
                    return curr;
                q.push(curr->right);
            }
        }
        return NULL;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        int xheight = height(root, x, 0);
        int yheight = height(root, y, 0);
        
        TreeNode* xParent = parentNode(root, x);
        TreeNode* yParent = parentNode(root, y);
        
        cout<<xheight<<" "<<yheight<<endl;
        cout<<xParent<<" "<<yParent;

        return xheight == yheight && xParent != yParent;
    }
};*/
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int queueSize = q.size();
            TreeNode* xParent = NULL;
            TreeNode* yParent = NULL;
            
            for(int i = 0; i < queueSize; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                
                if(curr->left)
                {
                    q.push(curr->left);
                    
                    if(curr->left->val == x)
                        xParent = curr;
                    if(curr->left->val == y)
                        yParent = curr;
                }
                
                if(curr->right)
                {
                    q.push(curr->right);
                    
                    if(curr->right->val == x)
                        xParent = curr;
                    if(curr->right->val == y)
                        yParent = curr;
                }
            }
            
            if(xParent && yParent)
                return xParent != yParent;
        }
        
        return false;
    }
};
