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
    int maxDepth(TreeNode* root) {
        int maxi = 0;
        if(root == nullptr)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left != nullptr)
                    q.push(curr->left);
                if(curr->right != nullptr)
                    q.push(curr->right);
            }
            maxi++;
        }
        return maxi;
    }
};