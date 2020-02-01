/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        unordered_map<Node*, Node*>copies;
        Node* curr = head;
        
        while(curr)
        {
            copies[curr] = new Node(curr->val);
            curr = curr->next;
        }
        
        curr = head;
        
        while(curr)
        {
            copies[curr]->next = copies[curr->next];
            copies[curr]->random = copies[curr->random];
            
            curr = curr->next;
        }
        
        return copies[head];
    }
        //BRUTE FORCE + efficient
       /* if(!head)
            return head;
        
        Node* newHead = new Node(head->val);
        Node* newTrav = newHead;
        
        Node* trav = head->next;
        
        while(trav)
        {
            Node* tempNode = new Node(trav->val);
            newTrav->next = tempNode;
            
            newTrav = newTrav->next;
            trav = trav->next;
            
        }
        trav = head;
        newTrav = newHead;
        
        while(trav)
        {
            newTrav->random = findRandom(head, newHead, trav->random);
            
            newTrav = newTrav->next;
            trav = trav->next;
        }
        
        return newHead;
    }
    
    Node* findRandom(Node *trav, Node* newTrav, Node* random)
    {
        while(trav)
        {
            if(trav == random)
                return newTrav;

            trav = trav->next;
            newTrav = newTrav->next;
        }
        
        return nullptr;
    }*/
};
