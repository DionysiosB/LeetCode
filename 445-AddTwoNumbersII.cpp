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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        std::string a, b(""); ListNode* idx;
        idx = l1; while(idx != nullptr){a += ((char) idx->val + '0'); idx = idx->next;}
        idx = l2; while(idx != nullptr){b += ((char) idx->val + '0'); idx = idx->next;}
        
        std::reverse(a.begin(), a.end());
        std::reverse(b.begin(), b.end());
        
        while(a.size() < b.size()){a += '0';}
        while(b.size() < a.size()){b += '0';}
                
        ListNode * res = nullptr;
        int carry(0);
        for(int p = 0; p < a.size(); p++){
            int sum = carry + (a[p] - '0') + (b[p] - '0');
            int d = (sum % 10);
            carry = (sum / 10);
            
            ListNode * nn = new ListNode(d);
            nn->next = res; res = nn;
        }
        
        if(carry){ListNode* nn = new ListNode(carry); nn->next = res; res = nn;}
        
        return res;
    }
};
