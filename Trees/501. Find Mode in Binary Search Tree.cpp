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
    
    void findMode(TreeNode* root, unordered_map<int, int>& hMap, int& max)
    {
        if(!root)
            return;
        
        hMap[root->val]++;
        if(hMap[root->val] > max)
            max = hMap[root->val];
        
        findMode(root->left, hMap, max);
        findMode(root->right, hMap, max);
        
    }
    vector<int> findMode(TreeNode* root) {
        
        vector<int>result{};
        unordered_map<int, int> hMap;
        int max = INT_MIN;
        
        findMode(root, hMap, max);
        
        for(auto num: hMap)
            if(num.second == max)
                result.push_back(num.first);
        return result;
    }
};
