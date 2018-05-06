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
    bool hasCycle(ListNode *head) {
        
        if(head == NULL){return false;}
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
            if(fast != NULL){fast = fast->next;}
            else{return false;}
            
            if(fast == slow){return true;}
        }
        
        return false;
    }
};
