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
    string gameResult(ListNode* head) {
        ListNode* idx = head;
        int cnt(0);
        while(idx != nullptr){
            int a = idx->val;
            idx = idx->next;
            int b = idx->val;
            idx = idx->next;
            cnt += (a > b) - (a < b);
        }

        if(cnt){return cnt > 0 ? "Even" : "Odd";}
        else{return "Tie";}
    }
};
