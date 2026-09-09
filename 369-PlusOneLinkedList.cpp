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
    ListNode* plusOne(ListNode* head) {

        ListNode* idx = nullptr;
        ListNode* cur = head;
        while(cur != nullptr){
            if(cur->val != 9){idx = cur;}
            cur = cur->next;
        }

        if(idx == nullptr){
            ListNode* d = new ListNode;
            d->val = 0; d->next = head;
            head = d;
            idx = head;
        }

        bool flag(false);
        cur = head;
        while(cur != nullptr){
            if(cur == idx){flag = true;}
            if(flag){cur->val = (1 + cur->val) % 10;}
            cur = cur->next;
        }

        return head;
    }
};
