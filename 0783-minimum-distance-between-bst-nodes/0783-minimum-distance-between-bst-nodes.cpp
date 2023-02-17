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
    int minDiffInBST(TreeNode* root) {
        int res = INT_MAX;
        int prev = -1;
        function<void(TreeNode*)>inOrder = [&](TreeNode* root){
            if(root){
                inOrder(root->left);
                if(prev != -1)
                    res = min(res, root->val - prev);
                prev = root->val;
                inOrder(root->right);
            }
        };
        inOrder(root);
        return res;
    }
};