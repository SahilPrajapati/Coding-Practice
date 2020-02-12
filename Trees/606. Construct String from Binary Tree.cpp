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
    void convert(TreeNode* t, string& s)
    {
        if(!t) return;
        
        
        s +=  "(" + to_string(t->val) ;
        
        if(!t->left && t->right)
            s += "()";
        
        convert(t->left , s);
        convert(t->right, s);
        s += ")";
    }
    string tree2str(TreeNode* t) {
        if(!t) return "";
        
        string s = "";
        
        convert(t, s);
        s.erase(s.begin() + 0);
        s.pop_back();
        //s.erase(s.begin() + 1);
        return s;
        
    }
};
