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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev, *curr, *forward;
        prev=NULL;
        curr = head;
        if(curr== NULL) return NULL;
        forward = curr->next;


        while(curr->next !=NULL) {
            curr -> next = prev;
            prev = curr;
            curr = forward;
            forward = forward -> next;
        }
        curr -> next = prev;
        return curr;
        
    }
};