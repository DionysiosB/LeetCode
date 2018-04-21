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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* u = head;
        while((u != NULL) && (u->next != NULL)){
            if(u->val == u->next->val){
                ListNode* v = u->next;
                u->next = u->next->next;
                delete v;
            }
            else{u = u->next;}
        }

        return head;
    }
};
