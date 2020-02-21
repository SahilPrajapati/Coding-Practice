/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        int max = 0;
        for(int i=0;i<root->children.size();i++){
            int count = maxDepth(root->children[i]); 
            if(count>max)
                max=count;
        }
        return max+1;        
    }
};

/*
class Solution {
public:
    int maxDepth(Node* root) {
        
        if(!root)
            return 0;

        int depth = 0;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            
            for(int i = 0; i < size; i++)
            {
                Node* curr = q.front();
                q.pop();
                
                for(int i = 0; i < curr->children.size(); i++)
                    q.push(curr->children[i]);
            }
            depth++;
        }
        
        return depth;
        
    }
};*/
