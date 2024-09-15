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
        if(head == nullptr or head->next == nullptr)
            return head;
        ListNode* curr = head, *prev = nullptr, * front = curr->next;
        while(front != nullptr){
            curr->next = prev;
            prev = curr;
            curr = front;
            front = front->next;
            
        }
        curr->next = prev;
        return curr;
    }
};