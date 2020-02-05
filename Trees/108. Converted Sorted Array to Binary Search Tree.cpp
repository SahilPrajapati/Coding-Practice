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
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        if(!nums.size())
            return NULL;
        return ArrayToBST(nums, 0, nums.size() - 1);
    }
    
    TreeNode* ArrayToBST(vector<int>&nums, int start, int end)
    {
        if(start > end)
            return NULL;
        
        int mid = (start + end) / 2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        
        root->left = ArrayToBST(nums, start, mid - 1);
        root->right = ArrayToBST(nums, mid + 1, end);
        
        return root;
    }
    
};
