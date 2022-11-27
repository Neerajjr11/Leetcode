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
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        curr = prev;
        int value = INT_MIN;
        prev = NULL;
        while(curr != NULL){
            ListNode* nxt = curr->next;
            if(curr->val >= value){
                curr->next = prev;
                prev = curr;
                value = curr->val;
            }
            curr = nxt;
        }
        return prev;
    }
};