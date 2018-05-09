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
    ListNode* removeElements(ListNode* head, int x) {
        
        while(head != NULL && head->val == x){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        
        if(head == NULL){return head;}
        
        ListNode *n = head;
        while(n != NULL){
            if(n->next != NULL && n->next->val == x){
                ListNode *temp = n->next;
                n->next = n->next->next;
                delete temp;
            }
            else{n = n->next;}
        }
        
        return head;
    }
};
