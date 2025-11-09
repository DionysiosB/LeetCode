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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        std::vector<int> v;
        ListNode* idx = head;
        for(int p = 1; p <= right; p++, idx=idx->next){
            if(p >= left){v.push_back(idx->val);}
        }

        idx = head;
        for(int p = 1; p <= right; p++, idx=idx->next){
            if(p < left){continue;}
            idx->val = v.back(); v.pop_back();
        }

        return head;
    }
};
