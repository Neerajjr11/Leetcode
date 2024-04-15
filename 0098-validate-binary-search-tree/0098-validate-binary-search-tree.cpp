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
    void traverse(TreeNode* root, vector<int> & res){
        if(root == nullptr)
            return;
        traverse(root->left, res);
        res.push_back(root->val);
        traverse(root->right, res);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> res;
        traverse(root, res);
        for(int i = 1; i < res.size(); i++){
            if(res[i] > res[i - 1])
                continue;
            else
                return false;
        }
        return true;
    }
};