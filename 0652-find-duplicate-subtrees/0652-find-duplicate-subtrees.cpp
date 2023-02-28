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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        map<string, int> mp;
        vector<TreeNode*> res;
        // we do preorder traversal as it gives us the whole subtree first
        // there is -> string in the function because this will explicitly specify the return type of solve lambda function is string
        function<string(TreeNode*)> solve = [&](TreeNode* root) -> string{
            if(!root)
                return "#";
            string s = solve(root->left) + ',' + solve(root->right) + ',' + to_string(root->val);
            mp[s]++;
            if(mp[s] == 2)
                res.push_back(root);
            return s;
        };
        solve(root);
        return res;
    }
};