/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = nullptr;
        TreeNode* curr = root;
        stack<TreeNode*> st;
        while(curr!= nullptr or !st.empty()){
            if(curr != nullptr){
                st.push(curr);
                curr = curr->left;
            }else{
                curr = st.top();
                st.pop();
                if(prev != nullptr and prev->val >= curr->val)
                    return false;
                prev = curr;
                curr = curr->right;
            }
        }
        return true;
    }
};