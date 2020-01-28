/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<iostream>
using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_set<ListNode*> visited;
        
        while(headA)
        {
            visited.insert(headA);
            headA = headA -> next;
        }
        
        while(headB)
        {
            if(visited.count(headB))
                return headB;
            
            headB = headB -> next;
        }
       return headB;
        
        //USING HASHMAP
        
        /*
        map<ListNode*, int> hMap;
        
        while(headA)
        {
            hMap[headA]++;
            headA = headA -> next;
        }
        
        while(headB)
        {
            if(hMap[headB])
                return headB;
            
            headB = headB -> next;
        }
        
        return headB;
        */
        
        
        
        //LENGTH APPROACH
        
        /*
        ListNode* a = headA; 
        ListNode* b = headB;
        
        int lengthA = 0;
        int lengthB = 0;
        
        while(headA)
        {
            lengthA++;
            headA = headA->next;
        }
        
        while(headB)
        {
            lengthB++;
            headB = headB->next;
        }
        
        headA = a;
        headB = b;
        
        if(lengthA < lengthB)
        {
            while(lengthA != lengthB)
            {
                lengthB--;
                headB = headB->next;
            }
        }
        
        else if(lengthB < lengthA)
        {
            while(lengthB != lengthA)
            {
                lengthA--;
                headA = headA->next;
            }
        }
        
        
        while(headA != headB)
        {
                headA = headA->next;
                headB = headB->next;
            
        }
        
        return headA;
        /*
        
        // TWO POINTERS APPROACH...
        /*
        ListNode* a = headA; 
        ListNode* b = headB;
        
        if((!headA) || (!headB))
            return NULL;
        
        while((headA != headB))
        {
            if(!(headA))
                headA = b;
            if(!(headB))
                headB = a;
            if(headA == headB)
                return headA;
                
            headA = headA->next;
            headB = headB->next;
        }
        
        
        
        return headA; 
        */
        
    }
};
