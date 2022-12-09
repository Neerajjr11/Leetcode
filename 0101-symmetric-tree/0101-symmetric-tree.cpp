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
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return helper(root -> left, root -> right);
    }
    bool helper(TreeNode* leftsubtree, TreeNode* rightsubtree){
        if(leftsubtree == NULL && rightsubtree == NULL)
            return true;
        else if(leftsubtree == NULL || rightsubtree == NULL)
            return false;
        else if(leftsubtree -> val != rightsubtree -> val)
            return false;
        return helper(leftsubtree -> right, rightsubtree -> left) && helper(leftsubtree -> left, rightsubtree -> right);
    }
};