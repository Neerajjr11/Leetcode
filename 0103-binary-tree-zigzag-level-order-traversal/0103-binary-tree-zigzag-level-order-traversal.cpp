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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == nullptr)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        int i = 0;
        while(!q.empty()){
            int sz = q.size();
            vector<int> v(sz);
            int j = 0, n = sz;
            while(sz--){
                TreeNode* front = q.front();
                q.pop();
                if(i % 2 == 0)
                    v[j] = front->val;
                else
                    v[n - j - 1] = front->val;
                j++;
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
            }
            i++;
            res.push_back(v);
        }
        return res;
    }
};