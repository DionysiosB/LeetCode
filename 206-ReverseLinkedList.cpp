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
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL){return NULL;}

        ListNode *a = head;
        ListNode *b = head->next;

        while(b != NULL){
            ListNode *temp = b->next;
            b->next = a; 
            a = b; 
            b = temp;
        }
        
        ListNode *tail = head;
        head = a;
        tail->next = NULL;
        
        return head;
    }
};
