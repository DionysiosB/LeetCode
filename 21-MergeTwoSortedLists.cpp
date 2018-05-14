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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL){return l2;}
        if(l2 == NULL){return l1;}
        
        ListNode *h;
        if((l1->val) < (l2->val)){
            h = l1;
            l1 = l1->next;
        }
        else{
            h = l2;
            l2 = l2->next;
        }
        
        
        ListNode *a = h;
        while(l1 != NULL || l2 != NULL){
            if(l1 == NULL){a->next = l2; a = a->next; l2 = l2->next;}
            else if(l2 == NULL){a->next = l1; a = a->next; l1 = l1->next;}
            else if((l1->val) <= (l2->val)){a->next = l1; a = a->next; l1 = l1->next;}
            else if((l2->val) < (l1->val)){a->next = l2; a = a->next; l2 = l2->next;}
        }
        
        return h;
    }
};
