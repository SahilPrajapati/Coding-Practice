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
    void findLV(TreeNode* root, vector<int>& result, int curLevel)
    {
        if(!root) return;
        
        curLevel++;
        
        if(curLevel > result.size())
            result.push_back(root->val);
        else
        {
            if(result[curLevel - 1] < root->val)
                result[curLevel - 1] = root->val;
        }
        
        findLV(root->left, result, curLevel);
        findLV(root->right, result, curLevel);
    }
    vector<int> largestValues(TreeNode* root) {
        
        vector<int>result;
        int curLevel = 0;
        findLV(root, result, curLevel);
        
        return result;
        
        /*
        if(!root) return{};
        vector<int> result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            int maxNo = INT_MIN;
            for(int i = 0; i < size; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                
                if(maxNo < curr->val)
                    maxNo = curr->val;
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            
            result.push_back(maxNo);
        }
        
        return result;
        */
        
    }
};
