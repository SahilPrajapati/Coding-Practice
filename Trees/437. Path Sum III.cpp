class Solution
{
    int pathSum(TreeNode *root, int sum, bool consecutive)
    {
        
        if (!root)
            return 0;
        
        int result = 0;
        if (sum == root->val)
            result += 1;

        result += pathSum(root->left, sum - root->val, true) +
                  pathSum(root->right, sum - root->val, true);
        if (!consecutive)
        {
            cout<<root->val<<" ";
            result += pathSum(root->left, sum, false) +
                      pathSum(root->right, sum, false);
        }
        
        return result;
    }

public:
    int pathSum(TreeNode *root, int sum)
    {
        return pathSum(root, sum, false);
    }
};
