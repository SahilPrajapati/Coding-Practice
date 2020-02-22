/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        
        //RECURSION
        
        if(!root) return nullptr;
        
        if(root->left ) root->left->next = root->right;
        if(root->right) root->right->next = (root->next) ? root->next->left : nullptr;
        
        connect(root->left);
        connect(root->right);
        
        return root;
        
        
        
        // Without using anything
        
        /*
        if(!root)
            return root;
        
        Node* curr = root;
        while(curr->left)
        {
            Node* nextLevel = curr->left;
            while(curr)
            {
                curr->left->next = curr->right;
                curr->right->next = (curr->next)? curr->next->left : nullptr;
                
                curr = curr->next;
            }
            curr = nextLevel;
        }
        return root;
        */
        
        
        
        //Using Queue
        
        /*
        if(!root)
            return root;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            
            for(int i = 0; i < size; i++)
            {
                Node* curr = q.front();
                q.pop();
                
                curr->next = (i == size - 1) ? nullptr : q.front();
                
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                
            }
        }
        
        return root;
        */
        
    }
};
