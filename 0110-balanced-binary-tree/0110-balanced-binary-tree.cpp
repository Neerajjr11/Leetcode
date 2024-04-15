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
    int balanced(TreeNode* root){
        if(root == nullptr)
            return 0;
        int leftsubtree = balanced(root->left);
        int rightsubtree = balanced(root->right);
        if(leftsubtree == -1 or rightsubtree == -1)
            return -1;
        if(abs(leftsubtree - rightsubtree) > 1)
            return -1;
        return max(leftsubtree, rightsubtree) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        int check = balanced(root);
        if(check == -1)
            return false;
        return true;
        
    }
};