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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> mp;
        queue<pair<TreeNode*, pair<int, int>>> q;
        // store the vertical and level
        q.push({root, {0, 0}});
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                auto curr = q.front();
                q.pop();
                TreeNode* node = curr.first;
                int vertical = curr.second.first, level = curr.second.second;
                if(node->left != nullptr)
                    q.push({node->left, {vertical - 1, level + 1}});
                if(node->right != nullptr)
                    q.push({node->right, {vertical + 1, level + 1}});
                mp[vertical][level].insert(node->val);
            }
        }
        vector<vector<int>> res;
        if(root == nullptr)
            return res;
        for(auto i : mp){
            vector<int> verticalCol;
            for(auto j : i.second)
                verticalCol.insert(verticalCol.end(), j.second.begin(), j.second.end());
            res.push_back(verticalCol);
        }
        return res;
    }
};