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
    ListNode* swapPairs(ListNode* head) {
        
        if((head == NULL) || (head->next == NULL)){return head;}
        
        ListNode *a = head;
        while(a != NULL && a->next != NULL){
            int temp = a->val;
            a->val = a->next->val;
            a->next->val = temp;
            a = a->next->next;
        }

        return head;
    }
};
