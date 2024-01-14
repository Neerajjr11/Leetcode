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
    int convertToDecimal(string s){
        int n = s.size();
        int decimal = 0;
        int base = 0;
        for(int i = n - 1; i >=0; i--){
            decimal += ((s[i] - '0') * pow(2, base));
            base++;
        }
        return decimal;
    }
    int getDecimalValue(ListNode* head) {
        string s = "";
        while(head != nullptr){
            s += (head->val + '0');
            head = head->next;
        }
        return convertToDecimal(s);
    }
};