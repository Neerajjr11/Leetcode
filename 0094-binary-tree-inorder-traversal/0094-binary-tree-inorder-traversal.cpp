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
// Using Recursion

// class Solution {
// public:
//     void traverse(TreeNode* root, vector<int> & res){
//         if(root == nullptr)
//             return;
//         traverse(root->left, res);
//         res.push_back(root->val);
//         traverse(root->right, res);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> res;
//         traverse(root, res);
//         return res;
//     }
// };

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode* curr = root;
        stack<TreeNode*> st;
        while(true){
            if(curr != nullptr){
                st.push(curr);
                curr = curr->left;
            }else{
                if(st.empty())
                    break;
                curr = st.top();
                st.pop();
                res.push_back(curr->val);
                curr = curr->right;
            }
        }
        return res;
        
    }
};