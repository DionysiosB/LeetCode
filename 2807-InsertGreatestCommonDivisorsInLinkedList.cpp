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
    
    int gcd(int a, int b){return b ? gcd(b, a % b) : a;}
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* idx = head;
        while(idx != nullptr && idx->next != nullptr){
            ListNode * nxt = idx->next;
            int g = gcd(idx->val, nxt->val);
            ListNode* gn = new ListNode(g);
            idx->next = gn; gn->next = nxt; idx = nxt;
        }
        
        return head;
    }
};
