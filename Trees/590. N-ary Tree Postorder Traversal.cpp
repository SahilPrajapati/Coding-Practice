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
/*
class Solution {
public:
    void traversal(Node* root, vector<int>& result)
    {
        if(!root)
            return;
        
        result.push_back(root->val);
        
        for(int i = 0; i < root->children.size(); i++)
            traversal(root->children[i], result);
    }
    
    vector<int> preorder(Node* root) {
        
        vector<int> result;
        
        traversal(root, result);
        return result;
    }
};*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        stack<Node*> nodes;
        vector<int> traversal;
        if (root != nullptr) {
            nodes.push(root);
        }
        while (!nodes.empty()) {
            auto cur = nodes.top();
            nodes.pop();
            traversal.push_back(cur->val);
            for (auto iter = cur->children.begin(); iter != cur->children.end(); iter++) {
                nodes.push(*iter);
            }
            
        }
        reverse(traversal.begin(), traversal.end());
        return traversal;
    }
};
