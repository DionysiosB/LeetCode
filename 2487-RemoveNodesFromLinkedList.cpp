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
    ListNode* removeNodes(ListNode* head) {

        std::vector<int> v;
        ListNode *f = head;
        while(f){
            int x = f->val;
            while(!v.empty() && v.back() < x){v.pop_back();}
            v.push_back(x);
            f = f->next;
        }
        
        f = head;
        ListNode * g = head;
        for(int p = 0; p < v.size(); p++){
            f->val = v[p];
            if(p + 1 < v.size()){f = f->next;}
            else{g = f->next; f->next = nullptr;}
        }

        while(g){
            ListNode* h = g;
            g = g->next;
            delete h;
        }

        return head;
    }
};
