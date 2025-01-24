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
    ListNode* frequenciesOfElements(ListNode* head) {
        
        std::map<int, int> m;
        ListNode* idx = head;
        while(idx != nullptr){++m[idx->val]; idx = idx->next;}
        
        ListNode* root = nullptr;
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            ListNode* node = new ListNode;
            node->val = it->second;
            node->next = root;
            root = node;
        }
        
        return root;
    }
};
