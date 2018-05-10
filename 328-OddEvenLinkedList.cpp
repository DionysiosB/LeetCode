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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL){return head;}
        
        ListNode *evenHead = head->next;
        ListNode *a = head;
        ListNode *b = head->next;
        
        while((a != NULL) && (b != NULL)){
            a ->next = b->next;
            if(a->next != NULL){b->next = a->next->next;}
            a = a->next; b = b->next;
        }
        
        a = head;
        while(a->next != NULL){a = a->next;}
        a->next = evenHead;

        return head;
    }
};
