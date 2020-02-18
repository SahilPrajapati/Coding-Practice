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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
            return {};
        
        queue<TreeNode*> q;
        q.push(root);
        
        vector<vector<int>> result;
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int> curr;
            for(int i = 0; i < size; i++)
            {
                root = q.front();
                q.pop();
                curr.push_back(root->val);
                
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
            
            result.push_back(curr);
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
