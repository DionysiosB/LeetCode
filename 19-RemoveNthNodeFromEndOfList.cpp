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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *a = head; ListNode *b = head;
        while(n--){b = b->next;}
        ListNode *c;
        if(b == NULL){c = head; head = head->next;}
        else{
            while(b->next != NULL){a = a->next; b = b->next;}; 
            c = a->next;
            a->next = a->next->next;
        }
        
        delete c;
        return head;
    }
};
