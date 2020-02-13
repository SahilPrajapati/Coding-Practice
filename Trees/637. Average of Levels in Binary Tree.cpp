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
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) return {};
        
        queue<TreeNode*>q;
        vector<double> result;
        
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            double sum = 0;
            for(int i = 0; i < size; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            result.push_back(sum / size);
        }
        
        return result;
    }
};
