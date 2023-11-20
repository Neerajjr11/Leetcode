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
    int sum = 0;
    int max_depth = 0;
    int res = 0;
    int height(TreeNode* root){
        if(root == NULL)
            return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    void solve(TreeNode* root, int depth){
        if(root == NULL){
            return ;
        }
        // cout<<max_depth<<" ";
        if(root->left == NULL and root->right == NULL and max_depth - 1 == depth)
            sum += root->val;
        solve(root->left, depth + 1);
        solve(root->right, depth + 1);
    }
    int deepestLeavesSum(TreeNode* root) {
        max_depth = height(root);
        solve(root,0);
        return sum;
    }
};