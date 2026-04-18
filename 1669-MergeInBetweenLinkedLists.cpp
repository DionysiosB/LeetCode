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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode * f = list1;
        for(int p = 1; p < a; p++){f = f->next;}

        ListNode *g = f->next;
        f->next = list2;
        for(int p = a; p <= b; p++){
            ListNode *h = g;
            if(!g){break;}
            g = g->next;
            delete h;
        }

        while(f && f->next){f = f->next;}
        f->next = g;

        return list1;
    }
};
