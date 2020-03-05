/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
public:
    Node* clone(Node* node, map<int, Node*>& map)
    {
        if(!node) return NULL;
        
        if(map.count(node->val) != 0) return map[node->val];
        
        Node* newNode = new Node(node->val);
        map[node->val] = newNode;
        
        for(Node* neighbor : node->neighbors)
            newNode->neighbors.push_back(clone(neighbor, map));
        
        return newNode;
    }
    
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        
        map<int, Node*> map;
        
        return clone(node, map);
    }
};
