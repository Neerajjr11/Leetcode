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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            long long int sum = 0 , count = 0;
            queue<TreeNode*> temp;
            while (!q.empty()){
                TreeNode* n = q.front();
                q.pop();
                sum += n->val;
                count++;
                if(n->left != NULL)
                    temp.push(n->left);
                if(n->right != NULL)
                    temp.push(n->right);
            }
            q = temp;
            result.push_back(sum*1.0/count);
        }
        return result;
    }
};