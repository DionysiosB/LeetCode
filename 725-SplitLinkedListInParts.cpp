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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        ListNode* f = head;
        int n(0); while(f){++n; f = f->next;}
        int d(n / k), rem(n % k);
        std::vector<ListNode*> v(k);

        f = head;
        for(int p = 0; p < k; p++){
            std::pair<ListNode*, ListNode*> sn = splitNodes(head, d + (p < rem));
            v[p] = sn.first;
            head = sn.second;
        }

        return v;        
    }

private:
    std::pair<ListNode*, ListNode*> splitNodes(ListNode* head, int len){

        std::pair<ListNode*, ListNode*> w = std::make_pair(head, nullptr);
        ListNode* f(head);
        for(int p = 0; p < len; p++){
            if(!f){break;}
            if(p + 1 == len){
                w.second = f->next;
                f->next = nullptr;
            }
            else{f = f->next;}
        }

        return w;

    }

};
