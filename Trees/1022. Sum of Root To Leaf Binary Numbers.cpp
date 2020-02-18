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
        
    void GetSum(TreeNode* root, int curVal, int& sum)
    {
        if(!root)
            return;
        
        curVal = (curVal << 1) | root->val;
        
        if(!root->left && !root->right)
            sum += curVal;
        
        GetSum(root->left, curVal, sum);
        GetSum(root->right, curVal, sum);

    }
    
    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        GetSum(root, 0, sum);
        return sum;
    }    
};

//SOLUTION 2

/*
class Solution {
    
    public: int sumRootToLeaf(TreeNode* root) {
    return sumRootToLeaf(root,0);  }
    
    int sumRootToLeaf(TreeNode* root,int n)
    {
        if(!root) return 0;
        if(!root->left && !root->right)return (n*2)+root->val;
        
        int s1 = sumRootToLeaf(root->left,(n*2)+root->val);
        cout<<" s1 : "<<s1;
        int s2 = sumRootToLeaf(root->right,(n*2)+root->val);  
        cout<<" s2 : "<<s2;
        
        return s1+s2;
    }
    
};
/*


/*
class Solution {
public:
    int decimal(vector<int> binary)
    {
        int s = 0;
        for(int i = binary.size() - 1; i >= 0; i--)
            s += pow(2, binary.size() - 1 - i)*binary[i];
        
        return s;
    }
    void calculateSum(TreeNode* root, vector<int>binary, int& sum)
    {
        if(!root) return;
        
        if(!root->left && !root->right)
        {
            binary.push_back(root->val);
            sum += decimal(binary);
        }
        
        binary.push_back(root->val);
        calculateSum(root->left, binary, sum);
        calculateSum(root->right, binary, sum);
            
    }
    
    int sumRootToLeaf(TreeNode* root) 
    {
        int sum = 0;
        vector<int> binary{};
        
        calculateSum(root, binary, sum);
        
        return sum;
    }
};*/
