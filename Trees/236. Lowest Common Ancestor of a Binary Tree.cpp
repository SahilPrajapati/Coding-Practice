class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        queue<TreeNode*> que;
        map<TreeNode*, TreeNode*> parent;
        
        parent[root] = NULL;
        que.push(root);
        
        while(parent.find(p) == parent.end() || parent.find(q) == parent.end())
        {
            TreeNode* curr = que.front();
            que.pop();
            if(curr->left)
            {
                que.push(curr->left);
                parent[curr->left] = curr;
            }
            
             if(curr->right)
            {
                que.push(curr->right);
                parent[curr->right] = curr;
            }
        }


        set<TreeNode*> ancestors;
        
        while(p)
        {
            cout<<p->val<<" ";
            ancestors.insert(p);
            p = parent[p];
        }

        while(!ancestors.count(q))
        {
            q = parent[q];
        }
        return q;
        /*
        
        if(!root || root == p || root == q)
            return root;
        
        TreeNode* left =  lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        
        if(!left) return right;
        if(!right) return left;
        
        return root;
*/        
    }
};
