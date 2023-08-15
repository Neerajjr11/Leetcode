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
    ListNode* partition(ListNode* head, int x) {
        // Here we will take two lists called left and right
        // we iterate through the LL and if the element is < x we add it in left
        // if the element is >= x we add it in right, this way we preserve the relative ordering of the  list
        // Last, we merge the list i.e point left->next to right and point the last element of right to null
        ListNode * left = new ListNode(0);
        ListNode * right = new ListNode(0);
        
        ListNode * left1 = left;
        ListNode * right1 = right;
        while(head != nullptr){
            if(head->val < x){
                left1->next = head;
                left1 = left1->next;
            }else{
                right1->next = head;
                right1 = right1->next;
            }
            head = head->next;
        }
        left1->next = right->next;
        right1->next = nullptr;
        return left->next;
        
    }
};