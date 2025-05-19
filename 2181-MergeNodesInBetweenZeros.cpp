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
    ListNode* mergeNodes(ListNode* head) {

        ListNode* h = new ListNode(0);
        ListNode* g(h);

        ListNode* a(head);
        while(a && a->next){
            ListNode * b = a->next;
            int s(0); while(b->val){s += b->val; b = b->next;}
            g->val = s;  
            if(!(b->next)){break;}
            else{ListNode * nxt = new ListNode(0); g->next = nxt; g = nxt;}
            a = b;
        }

        return h;
    }
};
