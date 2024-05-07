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
    ListNode* doubleIt(ListNode* head) {
        vector<int> v;
        stack<int> st;
        int carry = 0;
        ListNode* curr = head;
        while(curr != nullptr){
            st.push(curr->val);
            curr = curr->next;
        }
        while(!st.empty()){
            int num = st.top();
            st.pop();
            if(carry == 1){
                carry = 0;
                if(num > 4){
                    carry = 1;
                    v.push_back(((num * 2) % 10) + 1 );
                }else{
                    v.push_back((num * 2) + 1 );
                }
            }
            else if(num > 4){
                carry = 1;
                v.push_back((num * 2) % 10);
            }
            else
                v.push_back(num * 2);
            
        }
        if(carry == 1)
            v.push_back(1);
        
        ListNode* newHead = new ListNode(v[v.size() - 1]);
        ListNode* curr1 = newHead;
        for(int i = v.size() - 2; i >= 0; i--){
            ListNode* newNode = new ListNode(v[i]);
            curr1->next = newNode;
            curr1 = curr1->next;
        }
        return newHead;
    }
};