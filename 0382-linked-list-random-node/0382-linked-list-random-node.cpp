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
    ListNode *head = NULL;
    Solution(ListNode* head) {
        this->head = head;
    }
    
    int getRandom() {
        int res = 0;
        int div = 1;
        ListNode *temp = this->head;
        while (temp) {
            if (rand() % div == 0) 
            res = temp -> val;
            div ++;
            temp = temp->next;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */