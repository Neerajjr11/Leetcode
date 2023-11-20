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
    int diff = INT_MAX;
    int prev = INT_MAX;
    void solve(TreeNode* root){
        if(root == NULL)
            return;
        solve(root->left);
        diff = min(diff, abs(prev - root->val));
        prev = root->val;
        solve(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        solve(root);
        return diff;
    }
};