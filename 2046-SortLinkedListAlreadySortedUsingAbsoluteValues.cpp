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
    ListNode* sortLinkedList(ListNode* head) {
        if(!head){return nullptr;}

        std::deque<int> dq;
        while(head){
            if(dq.empty() || head->val > 0){dq.push_back(head->val);}
            else{dq.push_front(head->val);}
            head = head->next;
        }

        head = new ListNode(dq[0]);
        ListNode * node = head;
        for(int p = 1; p < dq.size(); p++){
            ListNode* nxt = new ListNode(dq[p]);
            node->next = nxt;
            node = node->next;
        }

        return head;
    }
};
