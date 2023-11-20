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
    int height(TreeNode* root){
        if(root == NULL)
            return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root == NULL)
            return NULL;
        int left_depth = height(root->left);
        int right_depth = height(root->right);
        
        if(left_depth == right_depth)
            return root;
        else if(left_depth > right_depth)
            return lcaDeepestLeaves(root->left);
        else
            return lcaDeepestLeaves(root->right);
    }
};