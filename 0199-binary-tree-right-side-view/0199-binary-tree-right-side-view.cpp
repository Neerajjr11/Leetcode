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
    vector<int> res;
    void recur(TreeNode* root, int level){
        if(root == NULL)
            return;
        if(res.size()<level)
            res.push_back(root->val);
        recur(root->right, level + 1);
        recur(root->left, level + 1);
    }
    vector<int> rightSideView(TreeNode* root) {
        recur(root, 1);
        return res;
    }
};