/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if (head == NULL || head->next == NULL)
            return NULL;
        
        ListNode *fast = head;
        ListNode *slow = head;
        bool cycleFound = false;
        
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                cycleFound = true;
                break;
            }
        }
        if (!cycleFound)
            return NULL;
        
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    
        
        
        
        //USING TEMPORARY POINTER
        
        /*ListNode* temp = new ListNode(-1);
        
        while(head)
        {
            if(head->next == temp)
            {
                cout<<" here : "<<head->val;
                return head;
            }
            
            cout<<head->val<<"  ";
            
            ListNode* headNext = head->next;
            head->next = temp;
            head = headNext;
            
        }
        cout<<"djf";
        return NULL;
        */
        
        //USING HASHMAP
        
        /*
        set<ListNode*> hMap;
        
        while(head)
        {
            if(hMap.count(head))
               return head;
                
            hMap.insert(head);
            head = head->next;
        }
        
        return NULL;
        */
    }
};
