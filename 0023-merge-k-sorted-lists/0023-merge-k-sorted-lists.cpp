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
struct CompareNodes {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }

            tail = tail->next;
        }

        tail->next = l1 ? l1 : l2;

        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        
        // Find the middle node of the linked list using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Split the linked list into two halves at the middle node
        ListNode* right = slow->next;
        slow->next = NULL;
        
        // Recursively sort the two halves of the linked list
        ListNode* left = sortList(head);
        right = sortList(right);
        
        // Merge the two sorted halves of the linked list
        return merge(left, right);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Create a priority queue to hold the first node of each linked list
        priority_queue<ListNode*, vector<ListNode*>, CompareNodes> pq;
        
        // Add the first node of each linked list to the priority queue
        for (auto node : lists) {
            if (node) {
                pq.push(node);
            }
        }
        
        // Create a dummy node as the head of the merged linked list
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        
        // While the priority queue is not empty, take the node with the smallest value and add it to the merged linked list
        while (!pq.empty()) {
            ListNode* node = pq.top();
            pq.pop();
            
            tail->next = node;
            tail = tail->next;
            
            if (node->next) {
                pq.push(node->next);
            }
        }
        
        return dummy->next;
    }
};