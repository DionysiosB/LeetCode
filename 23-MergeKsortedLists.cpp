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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        std::multiset< std::pair<int, ListNode*> > ms;
        for(int p = 0; p < lists.size(); p++){
            ListNode* x = lists[p];
            if(!x){continue;}
            ms.insert(std::make_pair(x->val, x));
        }

        ListNode * res = nullptr; ListNode * x = nullptr;
        while(!ms.empty()){
            int cv = ms.begin()->first;
            ListNode* cl = ms.begin()->second;
            ms.erase(ms.begin());
            ListNode* nln = new ListNode(cl->val);
            if(!res){res = nln; x = nln;}
            else{x->next = nln; x = x->next;}
            cl = cl->next;
            if(cl){ms.insert(std::make_pair(cl->val, cl));}
        }

        return res;
    }
};
