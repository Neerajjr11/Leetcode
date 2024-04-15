/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool getPath(TreeNode* root, vector<TreeNode*>& path, TreeNode* val){
        if(root == nullptr)
            return false;
        path.push_back(root);
        if(root == val)
            return true;
        if(getPath(root->left, path, val) or getPath(root->right, path, val))
            return true;
        path.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pnode, qnode;
        if(!getPath(root, pnode, p) or !getPath(root, qnode, q))
            return nullptr;
        int sz = min(pnode.size(), qnode.size());
        TreeNode* res = nullptr;
        for(int i = 0; i < sz; i++){
            if(pnode[i] == qnode[i])
                res = pnode[i];
            else
                break;
        }
        return res;
    }
};