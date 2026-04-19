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
    int pairSum(ListNode* head) {

        std::vector<int> v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        
        int mxs(0);
        for(int p = 0; p < v.size() - 1 - p; p++){
            int total = v[p] + v[v.size() - 1 - p];
            mxs = std::max(mxs, total);
        }

        return mxs;
    }
};
