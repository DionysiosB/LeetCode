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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *res = nullptr;
        ListNode *cur = nullptr;

        while(head != nullptr){
            int cv = head->val;
            if(head->next != nullptr && head->next->val == cv){
                while(head != nullptr && head->val == cv){
                    ListNode * todel = head;
                    head = head->next;
                    delete todel;
                }
            }
            else{
                ListNode * nn = new ListNode(cv);
                if(res == nullptr){res = nn; cur = nn;}
                else{cur->next = nn; cur = cur->next;}
                ListNode * todel = head;
                head = head->next;
                delete todel;
            }
        }

        return res;
    }
};
