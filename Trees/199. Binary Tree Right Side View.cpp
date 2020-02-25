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
    vector<int> rightSideView(TreeNode* root) {
        
        if(!root) return {};
        
        vector<int>result{};
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            
            for(int i = 0; i < size; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                
                if(i == size - 1)
                    result.push_back(curr->val);
                
                if(curr->left)
                    q.push(curr->left);
                
                if(curr->right)
                    q.push(curr->right);
            }
        }
        
        return result;
        
    }
};

*/
class Solution {
public:
    
    void findView(TreeNode* root, vector<int>& result, int& maxLevel, int curLevel)
    {
        if(!root) return;
        
        curLevel++;
        if(curLevel > maxLevel)
        {
            result.push_back(root->val);
            maxLevel = curLevel;
        }
        
        findView(root->right, result, maxLevel, curLevel);
        findView(root->left, result, maxLevel, curLevel);
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> result;
        int maxLevel = 0;
        int curLevel = 0;
        
        findView(root, result, maxLevel, curLevel);
        
        return result;
    }
};
