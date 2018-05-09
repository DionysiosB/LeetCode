/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a = getLength(headA);
        int b = getLength(headB);
        for(int p = 0; p < a - b; p++){headA = headA->next;}
        for(int p = 0; p < b - a; p++){headB = headB->next;}
        
        while(headA != headB){headA = headA->next; headB = headB->next;}
        return headA;
    }
    
    int getLength(ListNode *head){
        int count(0);
        while(head != NULL){++count; head = head->next;}
        return count;
    }
    
};
