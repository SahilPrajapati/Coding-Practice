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
    void traverse(TreeNode* root, int curLevel, int curDepth, map<int, map<int, vector<int>>>& result)
    {
        if(!root) return;

        result[curLevel][curDepth].push_back(root->val);
        
        traverse(root->left, curLevel -1, curDepth - 1, result);
        traverse(root->right, curLevel + 1 , curDepth - 1, result);

    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        int curLevel = 0;
        map<int, map<int, vector<int>>> result;
        vector<vector<int>> r;
        
        traverse(root, curLevel,0 , result);
        for(auto num : result)
        {
            vector<int> temp;
            for(auto it = (num.second).rbegin(); it != (num.second).rend(); it++)
            {
                sort((it->second).begin(), (it->second).end());
                for(auto a : it->second)
                    temp.push_back(a);
            }
            
            r.push_back(temp);
        }
        
        return r;
    }
};
