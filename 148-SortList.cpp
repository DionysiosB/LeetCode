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
    ListNode* sortList(ListNode* head) {

        std::vector<int> v;
        while(head != nullptr){
            v.push_back(head->val);
            ListNode* rem = head;
            head = head->next;
            delete rem;
        }

        sort(v.begin(), v.end());

        ListNode* cur;
        for(long p = 0; p < v.size(); p++){
            ListNode* nxt = new ListNode;
            nxt->val = v[p]; nxt->next = nullptr;
            if(!p){head = nxt; cur = nxt;}
            else{cur->next = nxt; cur = cur->next;}
        }

        return head;
    }
};
