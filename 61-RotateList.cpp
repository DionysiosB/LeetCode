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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL){return head;}
        int length = getLength(head);
        k %= length;
        if(k <= 0){return head;}
        ListNode *a = head;
        ListNode *b = head;
        for(int p = 0; p < k; p++){b = b->next;}
        while((b != NULL) && ((b ->next) != NULL)){a = a->next; b = b->next;}
        b->next = head;
        head = a->next;
        a->next = NULL;
        
        return head;
    }
    
    
    int getLength(ListNode* head){
        int len(0);
        while(head != NULL){++len; head = head->next;}
        return len;
    }
    
};
