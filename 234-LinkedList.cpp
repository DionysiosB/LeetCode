/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


//How to solve in O(n) without extra memory:
//1. Find the length of the list;
//2. Find the middle, and set a pointer there
//3. Invert the second half;
//4. Compare the two lists

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        std::vector<int> v;
        while(head != NULL){v.push_back(head->val); head = head->next;}
        size_t n = v.size();
        for(int p = 0; p < n / 2; p++){if(v[p] != v[n - 1 - p]){return false;}}
        return true;
    }
};
