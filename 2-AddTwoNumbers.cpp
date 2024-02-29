/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *res = new ListNode(0);
        ListNode *idx = res;

        int carry(0);
        while(l1 != nullptr || l2 != nullptr){
            if(l1 != nullptr){idx->val += l1->val; l1 = l1->next;}
            if(l2 != nullptr){idx->val += l2->val; l2 = l2->next;}
            carry = idx->val / 10; idx->val %= 10;
            if(l1 != nullptr || l2 != nullptr || carry > 0){
                ListNode * nxt = new ListNode(carry);
                idx->next = nxt; idx = idx->next;
            }
        }

        return res;
        
    }
};
