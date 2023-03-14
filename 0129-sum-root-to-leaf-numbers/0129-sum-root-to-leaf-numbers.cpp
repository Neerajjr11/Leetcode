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
    int dfs(TreeNode* root, int res){
        if(root == nullptr)
            return 0;
        res = res * 10 + root->val;
        if(!root->left and !root->right)
            return res;
        return dfs(root->left, res) + dfs(root->right, res);
            
    }
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};